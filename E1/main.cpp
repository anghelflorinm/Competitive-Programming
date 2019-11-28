#include <bits/stdc++.h>

using namespace std;
int sum[1000000001];
int main()
{
    sum[0] = ;
    sum.push_back(1);
    sum.push_back(2);
    long long  a=1, b=1;
    for(long long i= 3; i<1000000;i++)
    {
        long long  c= a+b;
        sum[i]= sum[i-1] + c;
        a= b;
        b =c;
    }
    long long t;
    cin>>t;
    while(t--)
    {
        long long left, right;
        cin>>left>>right;
        if(left == right)
        {
            cout<<fib[left]<<'\n';
            continue;
        }
        cout<<sum[right+1] - sum[left]<<'\n';
    }
    return 0;
}
