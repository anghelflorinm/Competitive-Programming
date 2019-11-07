#include <bits/stdc++.h>

using namespace std;
int n, k,s,e,difmax,v[1005], etotal, stotal;
void citire()
{
    for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(v[i]==-1)
                stotal++;
            else etotal++;
        }
}
int main()
{
    cin>>n>>k;
    citire();

       // difmax=abs(stotal-etotal);
    for(int j=0;j<=k-1;j++)
       {
            s=0; e=0;

           for(int i=0;i*k+j<=n;i++)
            if(i*k+j!=0)
                {if(v[i*k+j]==-1)
                    s++;
                else e++;
                }
            if(abs((stotal-s)-(etotal-e))>difmax)
            difmax=abs((stotal-s)-(etotal-e));
            s=0; e=0;
       }
       cout<<difmax;

    return 0;
}
