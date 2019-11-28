#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ll int
ll x,y;
int i,j,t,best;
ll n,m,bb,cc,a,b,s,c;
ll ans;
int v[1000];
int main()
{
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n<2) cout<<-1<<endl;
        else if(n<6) cout<<1<<endl;
        else if(n%11==0) cout<<2*(n/11)<<endl;
        else{
        a=n/11;
        c=a;
        a=a*11;
        b=n-a;
        if(b<6) cout<<(2*c+1)<<endl;
        else cout<<(2*c+2)<<endl;
        }
    }
for(i=0;i<100;i++) cout<<i<<' ';
    return 0;
}
