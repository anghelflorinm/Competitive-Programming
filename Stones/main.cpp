#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a, b, c;
        long long r = 0;
        cin>>a>>b>>c;
        c /=2;
        r+=min(c, b);
        b-=r;
        r*=3;
        b/=2;
        r+=min(a,b)*3;
        cout<<r<<endl;
    }
    return 0;
}
