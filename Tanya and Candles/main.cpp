#include <bits/stdc++.h>

using namespace std;
long long spi, spp, n, v[100050], si, sp,k;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>v[i];
    for(long long i=1;i<=n;i++)
    {

        si=spi;
        sp=spp;
        for(long long j=i+1;j<=n;j++)
        {
            if(j%2==0)
        {
            si+=v[j];
        }
        else sp+=v[j];
        }
        if(si==sp)
            k++;
        if(i%2==0)
        {
            spp+=v[i];
        }
        else spi+=v[i];

    }
    cout<<k;
    return 0;
}
