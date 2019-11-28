#include <iostream>

using namespace std;
long long p(long long a, long long b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    long long res = (p(a, b/2))%1000000007;
    if(b%2==0)
    {
        return (res*res)%1000000007;
    }
    return (((a * res) % 1000000007) * res) % 1000000007;
}
int main()
{
    long long n, m;
    cin>>n>> m;
    long long a = p(2,m) -1;
    cout<<(p(a,n))%1000000007;
    return 0;
}
