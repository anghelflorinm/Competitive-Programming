#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    long long n;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);

    }
    long long  r = v[0];
    for(int i=1;i<n;i++)
    {
        r=gcd(r, v[i]);

    }
    long long k=0;
    long long e =sqrt(r);
    for(long long i=1;i<=e;i++)
        if(r%i==0&&i*i!=r)
        {
            k+=2;
        }
        else if(r%i==0)
        {
            k+=1;
        }
    if(r==1)
    {
        k=1;
    }
    cout<<k;
    return 0;
}
