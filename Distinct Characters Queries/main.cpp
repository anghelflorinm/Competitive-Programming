#include <bits/stdc++.h>

using namespace std;
vector<set<int>> v(26);
string s;
int main()
{
    cin>>s;
    long long q;
    cin>>q;
    for(int i = 0; i<s.size(); i++)
    {
        v[s[i] - 'a'].insert(i);
    }
    while(q--)
    {
        int num;
        cin>> num;
        if(num == 1)
        {
          int p; char c;
          cin>>p>>c;
          p--;
          v[s[p]-'a'].erase(p);
          s[p] = c;
          v[s[p]-'a'].insert(p);
        }
        else
        {
            int l, r;
            cin>>l>>r;
            l--;
            r --;
            int k = 0;
            for(int i = 0; i<26;i++)
            {
                auto it = v[i].lower_bound(l);
                if(it!=v[i].end() && *it<=r)
                    k++;

            }
            cout<<k<<endl;
        }
    }
    return 0;
}
