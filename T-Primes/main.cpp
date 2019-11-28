#include <bits/stdc++.h>

using namespace std;
long long s[1000001];
map<long long,long long> p;
int main()
{
    long long n;
    cin>>n;
    for(long long i=2;i<=1000001;i++)
    {
        if(s[i]==0)
        {
            p[i*i]=1;
            int k=2;
            while(i*k<=1000001)
            {
                s[k*i]=1;
                k++;
            }
        }
    }
    for(long long i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        if(p[x]==1 && x!=1&&x!=0)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';

    }
    return 0;
}
