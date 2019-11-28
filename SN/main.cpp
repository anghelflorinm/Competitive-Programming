#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin>>n>>k;
    set<long long> s;
    deque<long long> dq;
    for(ll i = 0; i<n; i++)
    {
        ll x;
        cin>>x;
        if(s.find(x)==s.end())
        {
            s.insert(x);
            dq.push_back(x);
            if(dq.size()>k)
            {
                s.erase(dq.front());
                dq.pop_front();
            }
        }
    }
    cout<<dq.size()<<endl;
    while(dq.size()!=0)
    {
        cout<<dq.back()<<' ';
        dq.pop_back();
    }
    return 0;
}
