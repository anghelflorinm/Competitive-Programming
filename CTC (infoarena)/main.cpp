#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
ifstream fin ("ctc.in");
ofstream fout("ctc.out");
vector <int> v[100005];
vector <int> v2[100005];
vector <vector <int> > ans;
vector <int> H;
vector<pair<int,int>>times;
vector<int>rez[100050];
int uz[100005];
int uz1[100005];
int timee=0;
int n,m,x,y,i,j,k;
void citire()
{
    fin>>n>>m;
    for(i=1; i<=m; i++)
       {
        fin>>x>>y;
    v[x].push_back(y);
    v2[y].push_back(x);
       }

}
void dfs(int nod)
{
    uz[nod]=1;
    timee++;
    for(auto it : v2[nod])
    {
        if(uz[it]) continue;
        dfs(it);
    }
    timee++;
    times.push_back(make_pair(timee,nod));
}
void dfs2(int nod)
{
    uz[nod]=1;
    for(auto it : v[nod])
    {
        if(uz[it]) continue;
        dfs2(it);
    }
     rez[k].push_back(nod);
}
int main()
{
    citire();
    for(int i=1; i<=n; i++)
        if(!uz[i])
        dfs(i);
        sort(times.begin(), times.end(), greater<pair<int,int> >());
    memset(uz,0,sizeof(uz));
    for(int i=0; i<times.size(); i++)
        if(uz[times[i].second] == 0)
        {
            dfs2(times[i].second);
            k++;
        }

    fout<<k<<endl;
     for(int i=0; i<k; i++){
        for(int j=0; j<rez[i].size(); j++){
            fout<<rez[i][j]<<' ';
        }
        fout<<'\n';
     }
    return 0;
}
