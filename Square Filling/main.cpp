#include <bits/stdc++.h>

using namespace std;
int matrixa[100][100];
int matrixb[100][100];
void mutare(int i, int j)
{
    matrixb[i][j] = 1;
    matrixb[i+1][j] = 1;
    matrixb[i][j+1] = 1;
    matrixb[i+1][j+1] = 1;
}
vector<pair<int, int>> v;
int main()
{
    int n, m;
    cin>>n>>m;;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        cin>>matrixa[i][j];
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
        {
            if(matrixa[i][j] == 1 && matrixa[i+1][j] == 1 && matrixa[i][j+1] == 1 && matrixa[i+1][j+1] == 1)
               {
                   mutare(i,j);
                   v.push_back(make_pair(i,j));
                   continue;
               }
        }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(matrixa[i][j]!=matrixb[i][j])
            {
                cout<<"-1";
                return 0;
            }
        }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
