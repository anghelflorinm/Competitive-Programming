#include <bits/stdc++.h>

using namespace std;
map<string, string>m;
map<string, string>n;
string a, b, c;
int k=0,x,y;
vector<string> v;
int main()
{
    cin >>x>>y;
    for(int i=1;i<=x;i++)
    {
        cin>>a>>b;
        b=b+";";
        m[b]=a;
    }
    for(int i=1;i<=y;i++)
      {
        cin>>a>>b;
        n[a]=b;
        c=a+" ";
        c=c+b;
        c=c+" #";
        c=c+m[b];
        v.push_back(c);
      }
    k=0;
    /*for(map<string,string>::iterator it=n.begin();it!=n.end();it++)
        {cout<<it->first<<" "<<it->second<<" "<<"#"<<v[k]<<endl;
        k++;}*/
        for(k=0;k<y;k++)
            cout<<v[k]<<" "<<endl;

    return 0;
}
