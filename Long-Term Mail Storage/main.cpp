#include <bits/stdc++.h>

using namespace std;
queue<long long> q;
set<long long> s;
long long n, a, b;
int main()
{
    cin>>n>>a>>b;
    long long x;
    for(long long i = 0; i<n; i++)
    {
        cin>>x;
        q.push(x);
    }
    long long maxi = x;
    for(int i = 1; i< maxi + b + 100; i++)
    {
        if(i == q.front())
        {
            s.insert(q.front());
            q.pop();
        }
        if(s.size() == a || s.find(i-b) != s.end())
        {
            int k = ceil((float)s.size()/2);
            while(k--)
            {
                cout<<i<<" ";
                s.erase(s.begin());
            }
        }
    }
    return 0;
}
