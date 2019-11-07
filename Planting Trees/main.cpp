#include <bits/stdc++.h>

using namespace std;
int n;
long v[100005];
int deja;
int deplasare;
int raspuns;
bool cmp(long a, long b)
{
    return a>b;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v,v+n,cmp);
    raspuns=v[0]+2;
    for(int i=1;i<n;i++)
    {
        deplasare=v[0]-v[i]-i+deja;
        if(deplasare<0)
        {
            deja=deja+abs(deplasare);
            raspuns+=abs(deplasare);
        }

    }
    cout<<raspuns;
    return 0;
}
