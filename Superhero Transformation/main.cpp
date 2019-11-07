#include <bits/stdc++.h>

using namespace std;
string s1,s2;
bool vocala(char c)
{
    if(c=='a'||c=='u'||c=='e'||c=='i'||c=='o')
    {
        return true;
    }
    return false;

}
int main()
{
    cin>>s1>>s2;
    int ok=1;
    if(s1.size()==s2.size())
    {
        for(int i=0;i<s1.size()&&ok==1;i++)
        {
            if(!vocala(s1[i])&&vocala(s2[i]))
            {
                ok=0;
            }
            if(vocala(s1[i])&&!vocala(s2[i]))
            {
                ok=0;
            }

        }
    }
    else ok=0;
    if(ok==1)
        cout<<"Yes";
    else cout<<"No";
    return 0;
}
