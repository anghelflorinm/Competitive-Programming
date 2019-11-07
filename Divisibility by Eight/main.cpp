#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<(int)s.size()-2;i++)
        for(int j = i+1; j<(int)s.size()-1;j++)
            for(int k = j+1; k<(int)s.size();k++)
        {
            int n1 = s[i]-'0';
            int n2 = s[j]-'0';
            int n3 = s[k]-'0';
            int n4 = n1*10 + n2;
            int n5 = n1*10 + n3;
            int n6 = n2*10 + n3;
            int n7 = n1*100 + n2*10 + n3;
            if(n1%8 == 0)
            {
                cout<<"YES"<<'\n'<<n1;
                return 0;
            }
            if(n2%8 == 0)
            {
                cout<<"YES"<<'\n'<<n2;
                return 0;
            }
            if(n3%8 == 0)
            {
                cout<<"YES"<<'\n'<<n3;
                return 0;
            }
            if(n4%8 == 0)
            {
                cout<<"YES"<<'\n'<<n4;
                return 0;
            }
            if(n5%8 == 0)
            {
                cout<<"YES"<<'\n'<<n5;
                return 0;
            }
            if(n6%8 == 0)
            {
                cout<<"YES"<<'\n'<<n6;
                return 0;
            }
            if(n7%8 == 0)
            {
                cout<<"YES"<<'\n'<<n7;
                return 0;
            }
        }
        int n1 = s[0] - '0';
        if(n1%8==0)
        {
            cout<<"YES"<<'\n'<<n1;
            return 0;
        }
        if(s.size()==2)
        {
            int n2 = s[1]-'0';
            int n3 = 10*n1 + n2;
            if(n2%8 == 0)
            {
                cout<<"YES"<<'\n'<<n2;
                return 0;
            }
            if(n3%8 == 0)
            {
                cout<<"YES"<<'\n'<<n3;
                return 0;
            }
        }
        cout<<"NO";
    return 0;
}
