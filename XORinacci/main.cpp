#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a, b, n;

        cin>>a>>b>>n;
        if(n%3==0)
        {
            cout<<a<<endl;
            continue;
        }
        if(n%3==1)
        {
            cout<<b<<endl;
            continue;
        }
        cout<<(a^b)<<endl;
    }

    return 0;
}
