#include <bits/stdc++.h>

using namespace std;
set<long long> s;
int n;
long long v[30000];
int getlen(long long v[], int l, int r)
{
    if(r<l)
    {
        return 0;
    }
    int value;
    if(!s.count(v[r])&&!s.count(v[l]))
    {
        s.insert(v[r]);
        s.insert(v[l]);
        value = l + (n-1) -r;
    }
    else
        {
            value = 3000;
        }
    int v1 = getlen(v,l+1,r);
    int v2 = getlen(v,l, r+1);
    s.erase(v[r]);
    s.erase(v[l]);
    return(min(v1,min(v2,value)));
}
int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<getlen(v,0,n-1)<<endl;
    return 0;
}
