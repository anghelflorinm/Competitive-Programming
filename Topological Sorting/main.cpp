#include <bits/stdc++.h>

using namespace std;
ifstream fin("sortaret.in");
ofstream fout("sortaret.out");
vector<int> v[500000];
bool viz[500000];
stack <int> s;
void DFS(int nod)
{
    for(auto it : v[nod])
        if(!viz[it]){
           viz[it] = 1;
           DFS(it);
        }
    s.push(nod);
}
int main()
{
    int n; int m;
    int x; int y;
    fin>>n>>m;
    for(int i = 1; i <= m; i++)
        {
            fin>>x>>y;
            v[x].push_back(y);
        }
    for(int i=1;i<=n;i++)
    {
        if(viz[i]==0)
        {
            viz[i]=1;
            DFS(i);
        }
    }
    while(s.size()!=0)
    {
        fout<<s.top() <<' ';
        s.pop();
    }
    return 0;
}
