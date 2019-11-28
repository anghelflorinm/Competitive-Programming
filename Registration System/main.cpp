#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
unordered_map<string, long long> m;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(m.find(s)==m.end())
        {
            cout<<"OK"<<endl;
            m[s]=1;
            continue;
        }
        else
        {
            cout<<s<<m[s]<<endl;
            m[s]=m[s]+(long long)1;
            continue;
        }
    }
    return 0;
}
