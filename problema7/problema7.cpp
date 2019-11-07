#include <iostream>

using namespace std;
struct Vector { unsigned int nrElemente; int element [200];};
int Vmax(Vector v)
{
    unsigned int maxim=v.element[0];
    for(int i=0;i<v.nrElemente;i++)
        if (v.element[i]>maxim)
    {
        maxim=v.element[i];
    }
    return maxim;
}
Vector intersectia (Vector v1, Vector v2)
{
    Vector v1f, v2f, r;
    for(int i=0;i<=199;i++)
    {
        v1f.element[i]=0;
        v2f.element[i]=0;
        r.element[i]=0;
    }
    int maxim;
    int max1=Vmax(v1);
    int max2=Vmax(v2);
    for(int i=0;i<v1.nrElemente;i++)
        v1f.element[v1.element[i]]=1;
    for(int i=0;i<v2.nrElemente;i++)
        v2f.element[v2.element[i]]=1;
        if(max1>max2)
            maxim=max1;
        else maxim=max2;
        int k=0;
    for(int i=0;i<=maxim;i++)
        if(v1f.element[i]==1&&v2f.element[i]==1)
    {
         r.element[k]=i;
         k++;
    }
    r.nrElemente=k;
    return r;

}
Vector reuniune (Vector v1, Vector v2)
{
    Vector v1f, v2f, r;
    for(int i=0;i<=199;i++)
    {
        v1f.element[i]=0;
        v2f.element[i]=0;
        r.element[i]=0;
    }
    int maxim;
    int max1=Vmax(v1);
    int max2=Vmax(v2);
    for(int i=0;i<v1.nrElemente;i++)
        v1f.element[v1.element[i]]=1;
    for(int i=0;i<v2.nrElemente;i++)
        v2f.element[v2.element[i]]=1;
        if(max1>max2)
            maxim=max1;
        else maxim=max2;
        int k=0;
    for(int i=0;i<=maxim;i++)
        if(v1f.element[i]==1||v2f.element[i]==1)
    {
         r.element[k]=i;
         k++;
    }
    r.nrElemente=k;
    return r;

}
Vector diferenta (Vector v1, Vector v2)
{
    Vector v1f, v2f, r;
    for(int i=0;i<=199;i++)
    {
        v1f.element[i]=0;
        v2f.element[i]=0;
        r.element[i]=0;
    }
    int maxim;
    int max1=Vmax(v1);
    int max2=Vmax(v2);
    for(int i=0;i<v1.nrElemente;i++)
        v1f.element[v1.element[i]]=1;
    for(int i=0;i<v2.nrElemente;i++)
        v2f.element[v2.element[i]]=1;
        if(max1>max2)
            maxim=max1;
        else maxim=max2;
        int k=0;
    for(int i=0;i<=maxim;i++)
        if(v1f.element[i]==1&&v2f.element[i]==0)
    {
         r.element[k]=i;
         k++;
    }
    r.nrElemente=k;
    return r;

}

int main()
{
    Vector v1, v2, test;
    v1.nrElemente=5;
    v2.nrElemente=7;
    for(int i=0;i<v1.nrElemente;i++)
        cin>>v1.element[i];
    for(int i=0;i<v2.nrElemente;i++)
        cin>>v2.element[i];
    test=diferenta(v1,v2);
    for(int i=0;i<test.nrElemente;i++)
        cout<<test.element[i]<<" ";

    return 0;
}
