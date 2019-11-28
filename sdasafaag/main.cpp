#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000003
ll pou(ll n)
{
    if(n<=19) return ((ll)pow(2,n)% MOD);
    ll x=pou(n/2);
    if(n%2==0) return ((x*x)% MOD);
    else return ((((x*x)% MOD)*2)%MOD);
}
int main()
{   string s,ss;
    cin>>ss;
    for(ll ii=0;ii<ss.size();ii++)
    {
        if(ss[ii]=='>') s=s+"1000";
        else if(ss[ii]=='<') s=s+"1001";
        else if(ss[ii]=='+') s=s+"1010";
        else if(ss[ii]=='-') s=s+"1011";
        else if(ss[ii]=='.') s=s+"1100";
        else if(ss[ii]==',') s=s+"1101";
        else if(ss[ii]=='[') s=s+"1110";
        else if(ss[ii]==']') s=s+"1111";

    }
    ll ans=0;ll poz=s.size()-1;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1') ans=(ans+pou(poz-i))%MOD;//,cout<<i<<endl;
    }//cout<<s.size()<<" ssssssssssssss  "<<endl;
    cout<<ans;
   // cout<<endl<<s;
    //cout<<endl<<pou(7);
    return 0;
}
