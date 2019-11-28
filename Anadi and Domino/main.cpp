#include <bits/stdc++.h>

using namespace std;
int grad[8];
int main()
{
    int n, m;
    cin>>n>>m;
    for(int i = 0; i<m;i++)
    {
        int x, y;
        cin>>x>>y;
        grad[x]++;
        grad[y]++;
    }
    if(n<7)
    {
        cout<<m;
        return 0;
    }
    if(n==7 && m == 0)
    {
        cout<<0;
        return 0;
    }
    int mini = grad[1];
    int i_mini = 1;
    for(int i = 1; i<=n;i++)
    {
        if(grad[i]<mini)
        {
            mini = grad[i];
            i_mini = i;
        }

    }
    cout<< (m - mini + 1);
    return 0;
}
