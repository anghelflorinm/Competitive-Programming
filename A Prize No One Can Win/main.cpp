#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X;
    vector<int> values;
    int n;
    cin>> n>>X;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        values.push_back(q);
    }
    sort(values.begin(),values.end());
    for (int i=1;i<n;i++)
    {
        if(values[i]+values[i-1]>X)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<n;
    return 0;
}
