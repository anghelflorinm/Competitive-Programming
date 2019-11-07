#include <iostream>

using namespace std;
long long n, m, x, k, a;
long gcd(long a, long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    cin>>n>>m>>x;
    for(long i=1;i<=n;i++)
        for(long j=1;j<=m;j++)
        {
            cin>>a;
            if(gcd(a,x)!=1)
            {
                k++;
            }
        }
        cout<<k;
    return 0;
}
