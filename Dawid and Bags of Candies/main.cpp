#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v[4];
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    if((v[0]+v[1]+v[2]+v[3])%2==1)
    {
        cout<<"NO";
        return 0;
    }
    sort(v, v+4);
    if(v[0] + v[3] == v[1] + v[2] || v[0]+ v[1] + v[2] == v[3])
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
