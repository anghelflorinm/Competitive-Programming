#include <iostream>
#include <winbgim.h>
#include <cstdlib>
#include <conio.h>
#include<stdlib.h>
#include<graphics.h>
#define FUNDAL CYAN

using namespace std;
bool gata;

bool ocupat(int x, int y,int tablou[7][7])
{
    if(tablou[x][y]==1)return true;
    return false;
};

bool posibil_stanga(int x, int y,int tablou[7][7])
{
    if(ocupat(x,y-1,tablou)&&!ocupat(x,y-2,tablou)&&y>=2)return true;
    return false;
};

bool posibil_sus(int x, int y,int tablou[7][7])
{
    if(ocupat(x+1,y,tablou)&&!ocupat(x+2,y,tablou)&&x<=4)return true;
    return false;
};

bool posibil_dreapta(int x, int y,int tablou[7][7])
{
    if(ocupat(x,y+1,tablou)&&!ocupat(x,y+2,tablou)&&y<=4)return true;
    return false;
};

bool posibil_jos(int x, int y,int tablou[7][7])
{
    if(ocupat(x-1,y,tablou)&&ocupat(x-2,y,tablou)&&x>=2)return true;
    return false;
};

bool posibil(int x,int y,int tablou[7][7])
{
    if(posibil_stanga(x,y,tablou))return true;
    if(posibil_sus(x,y,tablou))return true;
    if(posibil_dreapta(x,y,tablou))return true;
    if(posibil_jos(x,y,tablou))return true;
    return false;
};
bool afara(int x,int y)
{  if((x<=1||x>=5)&&(y<=1||y>=5))return true;
 return false;
};

void generare(int tablou[7][7])
{
    for(int i=0;i<=6;i++)
        for(int j=0;j<=6;j++)
          if(!afara(i,j))
            tablou[i][j]=1;
            else
            tablou[i][j]=-1;
    tablou[3][3]=0;
 };
void gasireMijloc(int i, int j, int &xmijloc, int &ymijloc)
{
   int numar=7;
   int width=400;
   int height=400;
   int latura=width/numar;
   int sus=(getmaxy()-width)/2;
   int stanga=(getmaxx()-height)/2;
   int x1, y1, x2, y2;
   x1=stanga+latura*(j-1);
   y1=sus+latura*(i-1);
   x2=x1+latura;
   y2=y1+latura;
   xmijloc=(x1+x2)/2;
   ymijloc=(y1+y2)/2;
}
void desen(int tablou[7][7])
{
initwindow(800,600);
int i,j;
int xmijloc, ymijloc;
int numar=7;
int width=400;
int height=400;
int latura=width/numar;
int sus=(getmaxy()-width)/2;
int stanga=(getmaxx()-height)/2;
setbkcolor(FUNDAL); clearviewport(); setcolor(BLUE);

for (int i=1; i<=numar; i++)
       for (int j=1; j<=numar; j++)
           {if(!afara(i-1,j-1))rectangle(stanga+latura*(i-1),sus+latura*(j-1),stanga+latura*i,sus+latura*j);
            if(tablou[i-1][j-1]==1)
            {
                gasireMijloc(i,j,xmijloc,ymijloc);
                fillellipse(xmijloc,ymijloc,18,18);
            }

}
}



bool verifica(int tablou[7][7])
{
    for(int i=0;i<=6;i++)
        for(int j=0;j<=6;j++)
          if(!afara(i,j)&&posibil(i,j,tablou))
            return true;
    return false;
};

void afisare(int tablou[7][7])
{
    for(int i=0;i<=6;i++)
        {for(int j=0;j<=6;j++)
          if(!afara(i,j))
            cout<<tablou[i][j];
            else
            cout<<" ";
        cout<<endl;}
};

void cucereste(int x,int y,int n, int tablou[7][7])
{if(ocupat(x,y,tablou))
    {if(n==1)
    {if(posibil_stanga(x,y,tablou))
        {tablou[x][y-2]=1;
         tablou[x][y-1]=0;
         tablou[x][y]=0;}
    }
    else
        if(n==2)
        {if(posibil_sus(x,y,tablou))
            {tablou[x+2][y]=1;
             tablou[x+1][y]=0;
             tablou[x][y]=0;}
        }
        else
            if(n==3)
               {if(posibil_dreapta(x,y,tablou))
                    {tablou[x][y+2]=1;
                     tablou[x][y+1]=0;
                     tablou[x][y]=0;}
               }
                else
                  {if(posibil_jos(x,y,tablou))
                         {tablou[x-2][y]=1;
                          tablou[x-1][y]=0;
                          tablou[x][y]=0;}
                  }
  }
};
void selectarePiesa(int tablou[7][7])
{
    int linia,coloana,x,y;
    int xmijloc, ymijloc;
    int numar=7;
    int width=400;
    int height=400;
    int latura=width/numar;
    int sus=(getmaxy()-width)/2;
    int stanga=(getmaxx()-height)/2;
     if(ismouseclick(WM_LBUTTONDOWN))
    {
       clearmouseclick(WM_LBUTTONDOWN);
       x=mousex(); y=mousey();
       if (!(x>=stanga && x<=stanga+width && y>=sus&&y<=sus+height))
          gata=true;
       else
       {
          linia=(y-sus)/latura+1; coloana=(x-stanga)/latura+1;
          gasireMijloc(linia,coloana,xmijloc,ymijloc);
          if (tablou[linia][coloana]==1)
             {

                // stergere
               // setcolor(FUNDAL); setfillstyle(SOLID_FILL,FUNDAL);
                // afisez cerc rosu aprins
                gasireMijloc(linia,coloana,xmijloc,ymijloc);
                setcolor(LIGHTRED); setfillstyle(SOLID_FILL,LIGHTRED);
                fillellipse(xmijloc,ymijloc,18,18);
             }
       }
    }
}
int main()
{
    int tablou[7][7];
    generare(tablou);
    desen(tablou);
     gata=false;
   do
   {
      selectarePiesa(tablou);
   }
   while (!gata);
    getch();
    closegraph();
    return 0;
}
