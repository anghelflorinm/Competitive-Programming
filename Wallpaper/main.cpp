#include <bits/stdc++.h>

using namespace std;
struct q
{
    long long l, w, p;
};
struct r
{
    long long l, w, h;
};
int main()
{
    long long n ,m;
    vector<r>v1;
    vector<q>v2;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        long long x, y, z;
        cin>>x>>y>>z;
        r r1 = {x, y, z};
        v1.push_back(r1);
    }
    cin>>m;
    for(int i=0;i<n;i++)
    {
        long long x, y, z;
        cin>>x>>y>>z;
        q q1 = {x, y, z};
        v2.push_back(q1);
    }

    return 0;
}
