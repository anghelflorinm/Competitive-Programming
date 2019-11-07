#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long>v;
    long long n;
    cin>>n;
    for(long long i = 0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long x=0, y=0;
    for(long long i=0;i<n/2;i++)
    {
        x+=v[i];
    }
    for(long long i=n-1;i>=n/2;i--)
    {
        y+=v[i];
    }
    cout<<abs((x-0)*(x-0)+(y-0)*(y-0));
    return 0;
}
