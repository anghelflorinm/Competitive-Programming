#include <bits/stdc++.h>

using namespace std;
long long  v[1000000];
int main()
{
    ios::sync_with_stdio(false);
    long long n;
    long long  maxi = 0;
    long long  mini = INT_MAX;
    long long cl = 0;
    long long ch = 0;
    cin>>n;


    for(long long i =0; i<n; i++)
    {
        cin>>v[i];
        mini = min(mini, v[i]);
        maxi = max(maxi, v[i]);
    }
    if(maxi == mini)
    {
        cout<<0<<" "<<(n*(n-1))/2;
        return 0;
    }
    for(long long i=0; i<n; i++)
    {
        if(v[i] == mini)
        {
            cl += 1;
        }
        if(v[i] == maxi)
        {
            ch += 1;
        }
    }
    cout<<maxi - mini<<" "<<ch*cl;
    return 0;
}
