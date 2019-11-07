#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, v[100000], mink, maxk;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v,v+n);
    maxk=v[n-1]+k;
    int i=0;
    while(k!=0)
    {
        v[i]++;
        k--;
        i++;
        if(i==n)
        {
            i=0;
        }
    }
    cout<<v[1];
    mink=v[0];
    cout<<mink<<" "<<maxk;
    return 0;
}
