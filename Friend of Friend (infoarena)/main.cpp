#include <bits/stdc++.h>
using namespace std;
ifstream fin("fof.in");
ofstream fout("fof.out");
int n,m,i,cost[5005],nrcost[5005];
vector <int> t[5005],v;
queue <int> q;
bool cmp(int i, int j)
{
    if (nrcost[i]!=nrcost[j])
        return nrcost[i]>nrcost[j];
    else
        return i<j;
}
int main()
{
    fin>>n>>m;
    for (i=1; i<=m; i++)
    {
        int a,b;
        fin>>a>>b;
        t[a].push_back(b);
        t[b].push_back(a);
    }
    for (int i=1; i<=n; i++)
    {
        q.push(i);
        while (!q.empty())
        {
            int k=q.front();
            q.pop();
            for (int j=0; j<t[k].size(); j++)
                if ((cost[t[k][j]]>=cost[k]+1 || cost[t[k][j]]==0) && cost[k]<=2)
                {
                    if (cost[k]==1)
                        nrcost[t[k][j]]++;
                    cost[t[k][j]]=cost[k]+1,q.push(t[k][j]);
                }
        }
        for (int j=1; j<=n; j++)
        {
            if (cost[j]==2 && i!=j)
                v.push_back(j);
            cost[j]=0;
        }
        sort(v.begin(),v.end(),cmp);
        for (int j=0; j<v.size(); j++)
            fout<<v[j]<<' ';
        for (int j=1; j<=n; j++)
            nrcost[j]=0;
        v.clear();
        fout<<endl;
    }
}
