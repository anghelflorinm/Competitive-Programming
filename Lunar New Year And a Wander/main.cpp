#include <bits/stdc++.h>

using namespace std;
vector<int>v[100005];
int n,m;
int x, y;
bool viz[100005];
void citire()
{
   cin>>n>>m;

   for(int i=1;i<=m;i++)
   {
       cin>>x>>y;
       v[x].push_back(y);
        v[y].push_back(x);
   }
   for(int i=1;i<=n;i++)
   {
       sort(v[i].begin(),v[i].end());
   }
}
void DFS(int nod)
{
    for(auto it : v[nod])
        if(!viz[it])
    {
        cout<<it<<" ";
        viz[it]=1;
        DFS(it);

    }
}
int main()
{
    citire();
    viz[1]=1;
    cout<<1<<" ";
    DFS(1);
    return 0;
}
