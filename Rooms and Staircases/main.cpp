#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        long long first= s.find('1'), last = s.rfind('1');
        if(first == string::npos)
        {
            cout<<n<<endl;
            continue;
        }
        long long ans = max(s.size()-first, last+1);
        cout<<ans*2<<endl;
    }
    return 0;
}
