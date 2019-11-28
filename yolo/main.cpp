#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct caca
{
    ll s;
    ll d;
};
vector<caca>v;
ll maxime[100001];
bool sss(const caca &a,const caca &b)
{
    return a.s<b.s;
}
ll n,i,j,k,ans=0;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {   caca c;
        cin>>c.s>>c.d;
        v.push_back({c.s,c.d});
    }if(n==1) {cout<<0;return 0;}
    sort(v.begin(),v.end(),sss);
    maxime[0]=v[0].d;
    for(i=1;i<n;i++)
    {
        maxime[i]=max(maxime[i-1],v[i].d);
    }
for(ll i=1;i<n;i++)
{
    if(v[i].d<maxime[i-1]) ans++;
}


cout<<ans;






    return 0;
    for(ll i=1;i<n;i++)
    {
        for(ll j=0;j<i;j++)
        {
            if(v[i].d<v[j].d) {ans++;break;}
        }
    }
cout<<ans;
    return 0;
}
