#include <bits/stdc++.h>

using namespace std;
int a,b, n, m;
vector <long> v[1000000];
queue <long> Q;
set<long>vizx,vizy;
int viz[10000000];
int drum[1000000];
int x, y;
int k;
int okx=0;
int oky=0;
void citire()
{
    cin>>n>>m;
    cin>>x>>y;
    for (int i=1; i<=m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);

    }
}
void BFS (int a)
{
    Q.push(a);
    if(a==x)
    {
        okx=1;
    }
    if(a==y)
    {
        oky=1;
    }

    while(!Q.empty())
    {
        int nod= Q.front();
        Q.pop();
        for(auto it : v[nod])
        {
            if(!viz[it]&&it!=nod)
            {

                viz[it]=1;
                 if(it==x)
                {
                    okx=1;
                }
                if(it==y)
                {
                    oky=1;
                    }
                Q.push(it);
            }
        }
    }
}

int main() {
    citire();
    for(int i=1;i<=n;i++)
    {
       okx=0;
       oky=0;
       k=0;
       viz[i]=1;
       BFS(i);
       if(okx==0)
       {
           k++;
       }
       if(oky==0)
       {
           k++;
       }
       memset(viz,0,sizeof(viz));
       cout<<k<<" ";
    }
    return 0;
}
