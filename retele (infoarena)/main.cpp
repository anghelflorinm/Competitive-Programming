#include <bits/stdc++.h>

using namespace std;
ifstream fin ("retele.in");
ofstream fout("retele.out");
vector <int> v[50005];
vector <int> v2[50005];
int uz[50005],uz1[50005];
int n,m,x,y,k,a,post[50005];
vector<int> mini;
vector<int> ans[50005];
vector<pair<int,int>> S;
pair<int,int> w;
void citire()
{
    fin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        fin>>x>>y;
        v[x].push_back(y);
        v2[y].push_back(x);
    }

}
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second<b.second;
}
void dfs(int nod)
{
    uz[nod]=1;
    for(unsigned int it=0;it<v[nod].size();it++)
    {
        int e=v[nod][it];
        if(uz[e]) continue;
        dfs(e);
    }
    post[++a]=nod;
}
void dfs2(int nod)
{
    uz1[nod]=1;
    for(unsigned int it=0;it<v2[nod].size();it++)
    {
        int e=v2[nod][it];
        if(uz1[e]) continue;
        dfs2(e);
    }
    ans[k].push_back(nod);
}
int main()
{
    citire();
    for(int i=1; i<=n; i++)
        if(!uz[i])
            dfs(i);
    for(int i=a; i>=1; i--)
        if(!uz1[post[i]])
        {
            dfs2(post[i]);
            k++;
        }
        for(int i=0;i<k;i++)
    {
        sort(ans[i].begin(),ans[i].end());
        w.first=i;
        w.second=ans[i][0];
        S.push_back(w);
    }

    fout<<k<<'\n';
    sort(S.begin(),S.end(),cmp);

    for(int i=0; i<k; i++)

    {
        int nr=S[i].first;
        fout<<ans[nr].size()<<" ";
        for(int j=0;j<ans[nr].size();j++)
            fout<<ans[nr][j]<<" ";


        fout<<'\n';
    }
    return 0;
}
