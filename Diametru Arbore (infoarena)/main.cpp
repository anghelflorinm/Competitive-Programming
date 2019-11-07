#include <bits/stdc++.h>

using namespace std;
ifstream fin("darb.in");
ofstream fout("darb.out");
int n, m, i,lmax, departe,x,y;
vector<int> v[1000001];
int viz[1000001];
void dfs(int nod,int lungime)
{

    if(lungime>lmax)
    {
        lmax=lungime;
        departe=nod;
    }
    for(auto it : v[nod])
        if(!viz[it])
        {

            viz[it]=1;
            dfs(it, lungime+1);
        }

}
int main()
{
    fin>>n;
    for(i=1; i<=n-1; i++)
    {
        fin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    i=1;
    lmax=0;
    viz[1]=1;
    dfs(1,1);
    for(i=1;i<=n-1;i++)
        viz[i]=0;
    viz[departe]=1;
    dfs(departe, 1);
    fout<<lmax;
    return 0;
}
