#include <bits/stdc++.h>
using namespace std;
ifstream fin("dfs.in");
ofstream fout("dfs.out");
vector<int>v[100001];
queue<int>q;
int n,m,x,y,i;
bool viz[100001];
void dfs(int nod)
{
    for(auto it : v[nod])
        if(!viz[it])
    {
        viz[it]=1;
        dfs(it);
    }

}
int main()
{
        fin>>n>>m;
        for(i=1;i<=m;i++)
        {
            fin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        dfs(1);int ct=1;
        for(i=2;i<=n;i++)
        {
            if(viz[i]==0) {dfs(i);ct++;}
        }
        fout<<ct;


    return 0;
}
