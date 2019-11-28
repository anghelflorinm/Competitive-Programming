#include <bits/stdc++.h>
using namespace std;
ifstream fin("invinv.in");
ofstream fout("invinv.out");
bool cmp(int a, int b)
{
    if(a>b)
    {
        return true;
    }
    return false;
}
int main()
{

    long long t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;
        for(int i = 1; i<n-k;i++)
        {
            cout<<i<<' ';
        }
        for(int i = n; i>=n-k; i--)
        {
            cout<<i<<' ';
        }
        cout<<'\n';
    }
    return  0;
}
