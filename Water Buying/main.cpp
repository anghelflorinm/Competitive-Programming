#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long q, n ,a ,b, v[1000],k=0;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>n>>a>>b;
        if(a<(float)b/2)
        {
            v[k++]=a*n;
        }
        else{
            if(n%2==0)
            {
               v[k++]=b*(n/2);
            }
            else v[k++]=b*(n/2)+a;
        }
    }
    for(int i=0;i<k;i++)
        cout<<v[i]<<endl;
    return 0;
}
