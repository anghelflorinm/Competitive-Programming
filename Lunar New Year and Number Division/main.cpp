#include <bits/stdc++.h>

using namespace std;
long long n;
long long s;
long long x;
vector <int> v;
int main()
{
    s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
    sort(v.begin(), v.end());
    for(int i=0;i<n/2;i++)
    {
        s=s+(v[i]+v[n-i-1])*(v[i]+v[n-i-1]);
    }
    cout<<s;
    return 0;
}
