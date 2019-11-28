#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;
ll i,j,poz,nr_0,nr_1;
int main()
{

    cin>>s;
    if(s.find('0')==string::npos){
        cout<<2<<endl;
        printf("+2^%ld \n",s.size());
        cout<<"-2^0";return 0;
    }
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0') nr_0++;
        else nr_1++;
    }
    if(nr_1<=nr_0)
    {
        cout<<nr_1<<endl;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1') printf("+2^%ld\n",s.size()-i-1);
        }
        return 0;
    }
    else
    {

        cout<<nr_0+2<<endl;
        printf("+2^%ld \n",s.size());
        cout<<"-2^0"<<endl;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0') printf("-2^%ld\n",s.size()-i-1);
        }
        return 0;

    }

    return 0;
}
