#include <bits/stdc++.h>

using namespace std;
ifstream fin ("bfs.in");
ofstream fout ("bfs.out");
int a, n, m;
vector <int> v[1000000];
queue <int> Q;
int viz[10000000];
int drum[1000000];
int x, y;
void citire()
{
    fin>>n>>m>>a;
    for (int i=1; i<=m; i++)
    {
        fin>>x>>y;
        v[x].push_back(y);

    }
}
void BFS (int a)
{
    Q.push(a);
    while(!Q.empty())
    {
        int nod= Q.front();
        Q.pop();
        for(auto it : v[nod])
        {
            if(!viz[it]&&it!=nod)
            {
                drum[it]=drum[nod]+1;
                viz[it]=1;
                Q.push(it);
            }
        }
    }
}
void afisare()
{
    for(int i=1; i<=n; i++)
    {
        if(i==a)
        {
            fout<<"0 ";

        }
        else
        {
            if(drum[i]==0)
            {
                fout<<"-1 ";
            }
            else fout<<drum[i]<<" ";
        }

    }
}
int main()
{
    citire();
    BFS(a);
    afisare();
    fin.close();
    fout.close();
    return 0;
}
