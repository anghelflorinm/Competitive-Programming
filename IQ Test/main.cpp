#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
    int paritate;
    if((v[0]+v[1])%2==0)
    {
        paritate = v[0]%2;
    }
    else
    {
        paritate = v[2]%2;
        if(v[0] % 2 != paritate )
            cout<<1;
        else cout<<2;
        return 0;
    }
    for(int i=1;i<n; i++)
    {
        if(v[i] % 2 != paritate )
            {
                cout<<i+1;
            }

    }

    return 0;
}
