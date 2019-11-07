#include <bits/stdc++.h>

using namespace std;
struct fel{long long cost; long long  numar;long long  indice;};
struct client{long long q; long long  w;};
client coada[10000005];
long long n, m;
long long x;
long long j;
long long k,a, b;
fel aux;
vector<fel> v1;
long long  adresa[10000005];
bool cmp(fel a, fel b)
{
    if(a.cost>b.cost)
        return false;
    if(a.cost==b.cost&&a.indice>b.indice)
        return false;
    return true;
}
void citire()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        aux.indice=i+1;
        aux.numar=x;
        v1.push_back(aux);
    }
    for(long long  i=0;i<n;i++)
    {
        cin>>x;
        v1[i].cost=x;
    }
    sort(v1.begin(),v1.end(),cmp);
    for(long long  i=0;i<n;i++)
    {
      adresa[v1[i].indice]=i;
    }
    for(long long  i=0;i<m;i++)
        cin>>coada[i].q>>coada[i].w;



}
int main()
{
    citire();
    j=0;
    for(long long  i=0;i<m;i++)
    {
        k=0;
        a=coada[i].q;
        b=coada[i].w;
        if(v1[adresa[a]].numar>=b)
        {
            v1[adresa[a]].numar=v1[adresa[a]].numar-b;

            k=b*v1[adresa[a]].cost;
            b=0;

        }
        else{

            k=v1[adresa[a]].cost*(v1[adresa[a]].numar);
            b=b-v1[adresa[a]].numar;
            v1[adresa[a]].numar=0;
            aici:
            while(v1[j].numar==0&&j<n)
            {
                j++;
            }
            if(j!=n)
            {
                if(v1[j].numar>=b)
        {
            v1[j].numar=v1[j].numar-b;

            k=k+b*v1[j].cost;
            b=0;

        }
            else{

            k=k+v1[j].cost*(v1[j].numar);
            b=b-v1[j].numar;
            v1[j].numar=0;
            goto aici;
            }
            }

        }
        if(b==0)
        cout<<k<<endl;
        else cout<<0<<endl;
    }

    return 0;
}
