#include <bits/stdc++.h>

using namespace std;
vector<long long>v;
int main()
{
    long long n, m,q;
    cin>>n>>m;
    cin>>q;
    v.push_back(0);
    v.push_back(q);
    long long miniv = v[1];
    long long minip = 1;
    for(long long i=2;i<=n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
        if(v[i]<miniv)
        {
            miniv = v[i];
            minip = i;
        }
    }
    long long r = 1;
    while(minip>r+m-1)
    {
        r++;
    }
    cout<<r<<" "<<(r+m-1);
    return 0;
}
