#include <bits/stdc++.h>

using namespace std;
long long v[1000000];
int main()
{
    long long n, k;
    if(k%2==1)
    {
        cout<<-1;
        return 0;
    }
    for(long long i = 1;i<=n-k;i++)
    {
        v[i] = i;
    }
    return 0;
}
