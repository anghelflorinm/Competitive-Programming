#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a;
    cin>>n>>m>>a;
    long long l1=1;
    long long l2=1;

    l1 = n/a;
    if(n%a!=0) l1++;
    l2 = m/a;
    if(m%a!=0) l2++;

    cout<<l1*l2;
    return 0;
}
