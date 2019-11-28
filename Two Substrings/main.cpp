#include <bits/stdc++.h>

using namespace std;
char s[1000000];
int main()
{
    cin.getline(s,10000000);
    char* a = strstr(s,"AB");
    char* b = strstr(s,"BA");
    if(a==NULL)
    {
        cout<<"NO";
        return 0;
    }
    if(b==NULL)
    {
        cout<<"NO";
        return 0;
    }
    if(strstr(a+2, "BA"))
    {
        cout<<"YES";
        return 0;
    }
     else if(strstr(b+2, "AB"))
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
