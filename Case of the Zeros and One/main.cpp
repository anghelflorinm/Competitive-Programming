#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    stack<char> q;
    cin>>n;
    string s;
    cin>>s;
    int k = 0;
    q.push(s[0]);
    for(long long i = 1;i< s.size();i++)
    {
        if(q.size()!=0)
        {
        if(q.top()!=s[i])
        {
            q.pop();
            k+=2;
            continue;
        }
        else{
            q.push(s[i]);
        }
        }
        else
        {
            q.push(s[i]);
        }
    }
    cout<<s.size() - k;
    return 0;
}
