#include <bits/stdc++.h>
using namespace std;
ifstream f("secvzerounu.in");
ofstream g("secvzerounu.out");
int t;
string s;
int main()
{
    f>>t;
    for(int it=0;it<t;it++)
    {

        f>>s;
        if(s.size()==1)
        {
            if(s=="0") g<<"Da"<<endl;
            else g<<"Nu"<<endl;

        }
        else {
            if(s[0]=='1') g<<"Nu"<<endl;
            else
            {if(s[1]=='1') g<<"Da"<<endl;else g<<"Nu"<<endl;}
        }

    }
    return 0;
}
