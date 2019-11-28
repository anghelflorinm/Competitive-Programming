#include <iostream>
#include<bits/stdc++.h>
#define N_MAX 101
using namespace std;
ifstream fin("royfloyd.in");
ofstream fout("royfloyd.out");
int main()
{
    int m[N_MAX][N_MAX];
    int n;
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>m[i][j];
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(m[i][k] && m[k][j] && (m[i][j]>m[i][k]+m[k][j] || !m[i][j]) && i != j)
                    m[i][j]=m[i][k]+m[k][j];
            }
    for(int i=1;i<=n;i++)
        {for(int j=1;j<=n;j++)
        {
            fout<<m[i][j]<<' ';
        }
        fout<<'\n';
        }
    return 0;
}
