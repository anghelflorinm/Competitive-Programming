#include <bits/stdc++.h>

using namespace std;
vector<long long> v;
int main()
{
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    long long l=0,r=n-1;
    bool inside=false;
    bool found = false;
    for(long long i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1]&&!inside)
        {
            l=i;
            inside = true;
            found = true;
            continue;
        }
        if(v[i]<v[i+1] && inside)
        {
            r=i;
            inside = false;
            break;
        }
    }
    if(found)
    {
        reverse(v.begin()+l, v.begin()+r+1);
    }
    else
    {
        cout<<"yes"<<'\n'<<1<<" "<<1;
        return 0;
    }
    for(long long i = 0; i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes"<<'\n'<<l+1<<" "<<r+1;
    return 0;
}
