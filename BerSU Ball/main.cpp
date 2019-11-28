#include <bits/stdc++.h>

using namespace std;
vector<int> boys;
vector<int> girls;
int main()
{
    int n, m;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            boys.push_back(x);
        }
    cin>>m;
    int counter = 0;
    for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            girls.push_back(x);
        }
    sort(girls.begin(),girls.end());
    sort(boys.begin(),boys.end());
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(abs(boys[i]-girls[j])<=1)
    {
        girls[j]=-2000;
        counter++;
        break;
    }
    cout<<counter;
    return 0;
}
