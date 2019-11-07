#include <bits/stdc++.h>
#include<cstring>
using namespace std;
set <string> s;
int n,k;
char leaf[256];
int main()
{
    cin>>n;cin.get();
    for(int i=1;i<=n;i++)
    {
        cin.getline(leaf,256);
        if(s.find(leaf)==s.end())
        {
            k++;
            s.insert(leaf);
        }
    }
    cout<<k;
    return 0;
}
