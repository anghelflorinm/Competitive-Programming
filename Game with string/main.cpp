#include <iostream>

using namespace std;
string s;
string f,g;
int k;
int l;
int main()
{
    cin>>s;
    l=s.size();
    int i=0;
    while(i<l-1)
    {
        if(s[i]==s[i+1])
            {
                g=s.substr(0,i);
                f=s.substr(i+2,100005);
                s=f+g;
                i--;
                k++;
                l=l-2;
            }

           else i++;

    }
    if(k%2==0)
        cout<<"No";
    if(k%2==1)
        cout<<"Yes";
    return 0;
}
