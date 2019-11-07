#include <bits/stdc++.h>

using namespace std;
long long binarysearch(long long v[], long long l, long long r, int x)
{
    if(x<=v[0])
    {
        return 1;
    }
    long long m = l + (r-l)/2;
    if(x<=v[m] && x>v[m-1])
    {
        return m+1;
    }
    if(x<v[m-1])
    {
        return binarysearch(v,l,m-1,x);
    }
    return binarysearch(v, m+1, r, x);

}
int main()
{
    long long v[100006];
    long long n;
    cin>>n;
    long long x;
    cin>>v[0];
    for(long long i=1;i<n;i++)
    {
        cin>>x;
        v[i]=v[i-1]+x;
    }
    long long m1;
    long long q;
    cin>>m1;
    for(int i=0;i<m1;i++)
    {
        cin>>q;
        cout<<binarysearch(v,0,(n-1),q)<<endl;
    }

    return 0;
}
