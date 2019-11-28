#include <bits/stdc++.h >
using namespace std;
ifstream fin("eqset.in");
ofstream fout("eqset.out");
#define ll long long
ll n,i,it,t,a,b,c,d,e,ok,j;
bool prim(ll a)
{
    for(ll i=2;i<=sqrt(a);i++)
        if(a%i==0) return false;
        return true;
}
//bool ciur[1000000000];
ll euclid(ll a , ll b)
{   if(a<b) swap(a,b);
    ll c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;c=a%b;
    }return b;

}
int main()
{
        fin>>t;
        for(it=0;it<t;it++)
        {vector<bool>ciur(1000000000);
            fin>>a>>b;
            ll rez=euclid(a,b);cout<<rez<<endl;
            for(i=2;i<=sqrt(rez);i++) if(prim(i)) ciur[i]=true;
            a/=rez;
            b/=rez;
            for(i=2;i<=sqrt(a);i++) if(prim(i)==true)
            {
                if(ciur[i]==0) fout<<0<<endl;break;
            }





        }
    return 0;
}
