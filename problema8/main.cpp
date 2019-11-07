#include <iostream>
#include<cstring>
using namespace std;
int vf[300];
void litereCareNuApar(char sir[])
{
    int x,l;
    l=strlen(sir);
    for(int i=0;i<l;i++)
       {
           x=int(sir[i]);
           vf[x]++;
       }
    for(int i='a';i<='z';i++)
        if(vf[i]==0)
        cout<<(char)vf[i]<<' ';

}
void afisareLexicografica(char sir[])
{
    char m[255][255];
    char *p;
    char aux[255];
    char sep[]=" ";
    p=strtok(sir, sep);
    int k=0;
    while(p)
    {
        strcpy(m[k],p);
        k++;
        strtok(NULL,sep);
    }
    for (int i=0;i<=k-1;i++)
        for(int j=i+1;j<k;j++)
        if(strcmp(m[i],m[j])>0)
    {
        strcpy(aux,m[i]);
        strcpy(m[i],m[j]);
        strcpy(m[j],aux);
    }
    for(int i=0;i<k;i++)
    {
        cout<<m[i]<<" ";
    }
}
int main()
{
    char s[255]="Ana are mere";
    litereCareNuApar(s);
    afisareLexicografica(s);
    return 0;
}
