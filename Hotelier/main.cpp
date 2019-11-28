#include <bits/stdc++.h>

using namespace std;
long long v[10];
int main()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            v[s[i]-'0']=0;
            continue;
        }
        if(s[i]=='L')
        {
            for(int j=0;j<10;j++)
            {
                if(v[j]==0)
                {
                    v[j]=1;
                    break;
                }
            }
        }
        if(s[i]=='R')
        {
            for(int j=9;j>=0;j--)
            {
                if(v[j]==0)
                {
                    v[j]=1;
                    break;
                }
            }
        }
    }
    for(int i =0;i<10;i++)
        cout<<v[i];
    return 0;
}
