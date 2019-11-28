#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    long long k=0;
    bool found=false;
    for(long long i=0;i<s.length();i++)
    {
        if((i%4==0 || i%4==2) &&(i<s.length()-1 || found == true ))
        {
            k++;
        }
        if(i<s.length()-1 && s[i] == '1')
        {
            found=true;
        }

    }
    cout<<k;
    return 0;
}
