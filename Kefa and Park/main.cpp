#include <bits/stdc++.h>

using namespace std;
long long cats[1000000];
vector<int> v[1000000];
int viz[1000000];
int k;
long long n, m;
void DFS(long long nod, long long c)
{
    if(cats[nod])
    {
        c++;
    }
    else
    {
        c=0;
    }
    if(c>m)
    {
        return;
    }
    bool found = false;
    for(auto it:v[nod])
    if(!viz[it])
    {
        found = true;
        viz[it] =1;
        DFS(it,c);
    }
    if(!found)
    {
        k++;
    }
}
int main()
{

    cin>>n>>m;
    for(long long  i=1;i<=n;i++)
    {
        cin>>cats[i];
    }
    for(long long i=0;i<n-1;i++)
    {
        long long x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    viz[1]=1;
    DFS(1, 0);
    cout<<k;
    return 0;
}
