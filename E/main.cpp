#include <bits/stdc++.h>

using namespace std;
vector <long long> fib,sum;
int main()
{
    fib.push_back(1);
    fib.push_back(1);
    sum.push_back(0);
    sum.push_back(1);
    sum.push_back(2);
    for(long long i= 2; i<1000000001;i++)
    {
        fib.push_back((fib[i-1]+fib[i-2])%1000000007);
        sum.push_back(sum[i]+fib[i]);
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
