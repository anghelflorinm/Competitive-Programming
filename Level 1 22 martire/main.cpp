
#include <fstream>
#include<bits/stdc++.h>
using namespace std;
int x, y;
ifstream fin("intrare.in");
ofstream fout("iesire.out");
int turn;
char cheie;
long long n;
long long directie=0;
char coef_x=1, coef_y=0;
int wx, wy;
vector<int> spawn;
int N,Q;
double speed;
char miscare[10000000];


struct coordonate
{
    int x;
    int y;
};
double distanceCalculate(double x1, double y1, double x2, double y2)
{
	double x = x1 - x2; //calculating number to square in next step
	double y = y1 - y2;
	double dist;

	dist = pow(x, 2) + pow(y, 2);       //calculating Euclidean distance
	dist = sqrt(dist);

	return dist;
}
vector <coordonate>alien;
vector<int> tower;
vector<int> exista;
vector<coordonate> v;
vector <coordonate> towercoord;
vector<float> viata;
int main()
{
    fin>>wx>>wy;
    fin>>x>>y;
    fin.get();
    coordonate punct;
    punct.x=x;
    punct.y=y;
    char sep[]=" ";
    char*p;
    v.push_back(punct);
    fin.getline(miscare,100000000);
    int j=0;
    p=strtok(miscare,sep);
    int lungime=strlen(miscare);
    while(p)
    {
        cheie=p[0];
        p=strtok(NULL,sep);
        n=atoi(p);
        if(cheie=='F')
        {
            while(n!=0)
            {
                x+=coef_x;
                y+=coef_y;
                coordonate aux;
                aux.x=x;
                aux.y=y;
                v.push_back(aux);
                //fout<<x<<" "<<y<<endl;
                n--;
            }
            //x=x+coef_x*n;
            //y=y+coef_y*n;
        }
        else
        {
            directie=directie+n;
            if(directie%4==0)
            {
                coef_x=1;
                coef_y=0;
            }
            if(directie%4==1)
            {
                coef_x=0;
                coef_y=+1;
            }
            if(directie%4==2)
            {
                coef_x=-1;
                coef_y=0;
            }
             if(directie%4==3)
            {
                coef_x=0;
                coef_y=-1;
            }


        }
        p=strtok(NULL,sep);


    }
    float health;
    fin>>health;
    fin>>speed>>N;
    int maxims=0;;
    for(int i=0;i<N;i++)
    {
        int aux;

        fin>>aux;
        maxims=max(maxims,aux);
        spawn.push_back(aux);
    }
    int lasttick=(int)(speed*((v.size()-1)-spawn[maxims]));
    /*fin>>Q;
    for(int i=0;i<Q;i++)
    {
        float time, id;
        fin>>time>>id;
        fout<<time<<" "<<id<<" ";
        int calcul;
        if(spawn[id]>=time) calcul=0;
        else{
        calcul=(int)(speed*(time-(spawn[id])));}
        //fout<<calcul<<endl;
        if(calcul<v.size())
        {
          fout<<v[calcul].x<<" "<<v[calcul].y<<endl;
        }
        else fout<<v[v.size()-1].x<<" "<<v[v.size()-1].y<<endl;
            }
    */
    float damage, range;
    fin>>damage>>range;
    int t;
    fin>>t;
    for(int i=0;i<t;i++)
    {
        coordonate aux;
        fin>>aux.x>>aux.y;
        towercoord.push_back(aux);
    }
    int i;
    for(int i=0;i<lasttick;i++)
    {

    }


    return 0;
}
