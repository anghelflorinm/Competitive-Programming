#include <bits/stdc++.h>

using namespace std;
int n;
long l;
float maxdif=-1;
float margdif1, margdif2;
float curdif;
float v[1001];
int main()
{
    cin>>n>>l;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort (v+1,v+n+1);
    for(int i=1;i<n;i++)
    {
        curdif=(v[i+1]-v[i])/2;
        if(curdif>maxdif)
            maxdif=curdif;
    }
        margdif1=v[1];
        margdif2=l-v[n];
    if(margdif1>maxdif||margdif2>maxdif)
        maxdif=max(margdif1,margdif2);
    cout<<maxdif;
    return 0;
}
