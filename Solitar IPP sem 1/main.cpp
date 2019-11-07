#include <iostream>
#include <winbgim.h>
#include <cstdlib>
#include <conio.h>
#include<stdlib.h>
#include<graphics.h>
#define FUNDAL CYAN

using namespace std;
int tablou[8][8];
//int TablaSelect[8][8];
int height=400; int width=400;
int sus; int stanga;
int latura=width/7;
/*bool castigat(int tablou[7][7])
{
    for(int i=0;i<=6;i++)
        for(int j=0;j<=6;j++)
          if(!afara(i,j)&&tablou[i][j]==1&&!(i==3&&j==3))
            return false;
    return true;
}*/

bool mutareValida(int x1, int y1, int x2, int y2)
{
    if(tablou[x2][y2]==0)
    {
            if((x1==x2 && (y1+2==y2|| y1-2==y2))||(y1==y2 && (x1+2==x2|| x1-2==x2)))
                if(tablou[(x1+x2)/2][(y1+y2)/2]==1)
                    return true;
    }
    return false;
}
bool inInterior(int x, int y, int x1, int y1, int x2, int y2)
{
   return x1<=x && x<=x2 && y1<=y && y<=y2;
}

bool ocupat(int x, int y,int tablou[8][8])
{
    if(tablou[x][y]==1)return true;
    return false;
}
void stergePiesa(int linia, int coloana)
{
   int x1,y1,x2,y2,xmijloc,ymijloc;
   x1=stanga+latura*(coloana-1);
   y1=sus+latura*(linia-1);
   x2=x1+latura; y2=y1+latura;
   xmijloc=(x1+x2)/2; ymijloc=(y1+y2)/2;
   setcolor(BLUE); rectangle(x1,y1,x2,y2);
   setcolor(FUNDAL); setfillstyle(SOLID_FILL,FUNDAL);
   bar(xmijloc-20,ymijloc-20,xmijloc+20,ymijloc+20);
}
void deseneazaPiesa(int linia, int coloana,int culoare)
{
   int x1,y1,x2,y2,xmijloc,ymijloc;
   x1=stanga+latura*(coloana-1);
   y1=sus+latura*(linia-1);
   x2=x1+latura; y2=y1+latura;
   xmijloc=(x1+x2)/2; ymijloc=(y1+y2)/2;
   setcolor(BLUE);
   rectangle(x1,y1,x2,y2); setcolor(FUNDAL);
   setfillstyle(SOLID_FILL,FUNDAL);
   bar(xmijloc-20,ymijloc-20,xmijloc+20,ymijloc+20);
   setcolor(BLUE);
   setfillstyle(SOLID_FILL,culoare);
   fillellipse(xmijloc,ymijloc,18,18);
}
bool posibil_stanga(int x, int y,int tablou[8][8])
{
    if(y>=3&&ocupat(x,y-1,tablou)&&!ocupat(x,y-2,tablou))return true;
    return false;
}


bool posibil_jos(int x, int y,int tablou[8][8])
{
    if(x<=5&&ocupat(x+1,y,tablou)&&!ocupat(x+2,y,tablou))return true;
    return false;
}

bool posibil_dreapta(int x, int y,int tablou[8][8])
{
    if(y<=5&&ocupat(x,y+1,tablou)&&!ocupat(x,y+2,tablou))return true;
    return false;
}

bool posibil_sus(int x, int y,int tablou[8][8])
{
    if(x>=3&&ocupat(x-1,y,tablou)&&!ocupat(x-2,y,tablou))return true;
    return false;
}

bool posibil(int x,int y,int tablou[8][8])
{ if(ocupat(x,y,tablou))
    {
    if(posibil_stanga(x,y,tablou))return true;
    if(posibil_sus(x,y,tablou))return true;
    if(posibil_dreapta(x,y,tablou))return true;
    if(posibil_jos(x,y,tablou))return true;
    }
    return false;
}

bool afara(int x,int y)
{  if((x<=2||x>=6)&&(y<=2||y>=6))return true;
 return false;
}

bool terminat(int tablou[8][8])
{
    for(int i=1;i<=7;i++)
        for(int j=1;j<=7;j++)
          if(!afara(i,j)&&posibil(i,j,tablou))
            return false;
    return true;
}

void generare(int tablou[8][8])
{
    for(int i=1;i<=7;i++)
        for(int j=1;j<=7;j++)
          if(!afara(i,j))
            tablou[i][j]=1;
            else
            tablou[i][j]=-1;
    tablou[4][4]=0;
}


void desen(int tablou[8][8],int height,int width)
{
int i,j;
int latura=width/7;
int sus=(getmaxy()-width)/2;
int stanga=(getmaxx()-height)/2;
setbkcolor(FUNDAL); clearviewport(); setcolor(BLUE);
setfillstyle(SOLID_FILL,WHITE);
for (int i=1; i<=7; i++)
       for (int j=1; j<=7; j++)
           {if(!afara(i,j))rectangle(stanga+latura*(i-1),sus+latura*(j-1),stanga+latura*i,sus+latura*j);
                      if(tablou[i][j]==1)fillellipse(stanga+latura*(i-0.5),sus+latura*(j-0.5),18,18);

}
}
void afisare(int tablou[8][8])
{
    for(int i=1;i<=7;i++)
        {for(int j=1;j<=7;j++)
          if(!afara(i,j))
            cout<<tablou[i][j];
            else
            cout<<" ";
        cout<<endl;}
}







void mutarePiesa()
{
   int linia1,coloana1,linia2,coloana2,x,y;
   int x1, y1, x2, y2;
   int xmijloc, ymijloc;
   bool mutareCorecta;
  do
   {
   mutareCorecta=false;
   if(ismouseclick(WM_LBUTTONDOWN) && inInterior(x=mousex(),y=mousey(),stanga,sus,stanga+width,sus+height))
   {
     clearmouseclick(WM_LBUTTONDOWN);
     // x=mousex(); y=mousey();
    linia1=(y-sus)/latura+1;
    coloana1=(x-stanga)/latura+1;
    // cout<<linia1<<","<<coloana1<<"=>";
    //circle(stanga+coloana1*latura+latura/2, sus+linia1*latura+latura/2,5);
    if (tablou[linia1][coloana1]==1)
    {
        deseneazaPiesa(linia1,coloana1,LIGHTRED);
      do
      {
        if(ismouseclick(WM_LBUTTONDOWN) && inInterior(x=mousex(),y=mousey(),stanga,sus,stanga+width,sus+height))
        {
          clearmouseclick(WM_LBUTTONDOWN);
          // x=mousex(); y=mousey();
          linia2=(y-sus)/latura+1;
          coloana2=(x-stanga)/latura+1;
          // cout<<linia2<<","<<coloana2<<endl;
          if (mutareValida(linia1,coloana1,linia2,coloana2))
          {
            mutareCorecta=true;
            tablou[linia1][coloana1]=0;
            tablou[(linia1+linia2)/2][(coloana1+coloana2)/2]=0;
            tablou[linia2][coloana2]=1;
            stergePiesa(linia1,coloana1);
            stergePiesa((linia1+linia2)/2,(coloana1+coloana2)/2);
            deseneazaPiesa(linia2,coloana2,WHITE);
            afisare(tablou);
          }
          else{
                deseneazaPiesa(linia1,coloana1,WHITE);
                mutareCorecta=true;
          }
        }
      }
      while (!mutareCorecta);
    }
  }
 }
 while (!terminat(tablou));
}

int main()
{
    initwindow(height,width);
    generare(tablou);
    desen(tablou, height, width);
    sus=(getmaxy()-width)/2;
    stanga=(getmaxx()-height)/2;
    mutarePiesa();
    getch(); closegraph();
    return 0;
}
