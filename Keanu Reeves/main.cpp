#include <bits/stdc++.h>

using namespace std;
char s[200];
int main()
{
    int n;
    int n0=0, n1=0;
    cin>>n;
    cin.get();
    cin.getline(s,200);
    for(int i=0; i<n;i++)
    {
        if(s[i]=='0')
        {
            n0++;
        }
        else
        {
            n1++;
        }
    }
    cout<<n0<<n1<<endl;
    if(n%2==0)
    {
        if(n0==n1)
        {
            cout<<2<<endl;
            cout<<s[0]<<" "<<s+1;
        }
        else
        {
            cout<<1<<endl<<s;
        }


    }
    else
    {
        cout<<1<<endl;
        cout<<s;
    }
    return 0;
}
