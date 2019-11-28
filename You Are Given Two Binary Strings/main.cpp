#include <bits/stdc++.h>

using namespace std;
long cf[10][10];
int main()
{
    long long T;
    cin>>T;
    string x, y; long long pos_x, pos_y;
    for(int i=0;i<T;i++)
    {
        cin>>x>>y;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        for(int k=0;k<y.length();k++)
            if(y[k]=='1')
        {
            pos_y = k;
            break;
        }
        for(int k=0;k<x.length();k++)
            if(x[k]=='1' && k>=pos_y)
        {
            pos_x = k;
            break;
        }
         cout<<pos_x-pos_y<<endl;
    }
    return 0;
}
