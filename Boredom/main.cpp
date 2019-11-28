#include <bits/stdc++.h>

using namespace std;
map<long long, long long> cnt;
unsigned long long f[100006];
int main()
{
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        cnt[x]++;
    }
    f[0]=0;
    f[1]=cnt[1];
    for(long long i=2;i<=100005;i++)
    {
        f[i] = max(f[i-1], f[i-2] + cnt[i]*i);
    }
    cout<<f[100005];
    return 0;
}
