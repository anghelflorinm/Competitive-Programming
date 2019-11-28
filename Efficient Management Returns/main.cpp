#include <bits/stdc++.h>

using namespace std;
struct muchie{int x; int y;};
unordered_set<int> g[200001];
long long n, m;
int viz[2000001];
void DFS(int nod, int echipa, set<int>&s)
{
    viz[nod] = echipa;
    s.insert(nod);
    for(auto it : g[nod])
    {
        if(!viz[it])
        {
            bool found = true;
            for(auto it1: s)
            {
                if(it!=it1 && g[it1].find(it) == g[it1].end())
                {
                    found = false;
                }
            }

            if(found) DFS(it, echipa, s);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<= n; j++)
    {
       g[i].insert(j);
       g[j].insert(i);
    }
    for(int i = 0; i<m;i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].erase(y);
        g[y].erase(x);
    }
    int teams = 0;
    for(int i = 1;i<=n;i++)
    {
        if(viz[i] == 0)
        {
            set<int>s;
            s.insert(i);
            teams++;
            DFS(i,teams,s);
        }
    }
    cout<<teams<<endl;
    for(int i = 1;i<=n;i++)
    {
        cout<<viz[i]<<" ";
    }
    return 0;
}
