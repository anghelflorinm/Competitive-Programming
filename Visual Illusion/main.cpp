#include <bits/stdc++.h>

using namespace std;
int m[1000][1000];
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=-n;i<=n;i++)
        {
            for(int j=-n;j<=n;j++)
        {
                if((abs(i)+abs(j))%3==0)
                {
                    cout<<'b';
                }
                else
                {
                    cout<<'w';
                }
        }
        cout<<endl;
        }
    }
    return 0;
}
