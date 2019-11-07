#include <bits/stdc++.h>

using namespace std;
std::set <string> s;
string a;
int n, v[101], k;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(s.find(a)!=s.end())
            {
                k++;
                v[k]=1;
            }
        else {
                k++;
                v[k]=0;
            }
        s.insert(a);
    }
    for(int i=1;i<=k;i++)
        if(v[i]==1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    return 0;
}
