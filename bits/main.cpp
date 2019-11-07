#include <bits/stdc++.h>
using namespace std;
ifstream f("looking.in");
#define ll long long
ll x,b[20],t,i,j,l,n,k;
vector <ll> v;
int main()
{
        f>>t;
        for(l=1;l<=t;l++)
        {

            f>>n>>k;
            for(i=1;i<=n;i++)
            {
                f>>x;j=1;
                 while(x!=0)
    {
        b[j]=x%2;j++;
        x=x/2;
    }


            for(j=1;j<=20;j++) cout<<b[j];cout<<endl;
            }








        }
    return 0;
}
