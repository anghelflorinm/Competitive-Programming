#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string r;
    cin>>s;
    if(s.length()==1)
        {
            cout<<s[0];
            return 0;
        }

    for(int i=0;i<s.length();i++)
    {
        if(i%2==1)
        {
            if(s[i]!='z')
            {
               cout<<"Impossible";
            return 0;
            }
            continue;
        }
        r.push_back(s[i]);
    }
    if((s.length()-1)%2==1)
    {
        cout<<"Impossible";
        return 0;
    }
    cout<<r;
    return 0;
}
