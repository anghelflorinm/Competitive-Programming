#include <bits/stdc++.h>

using namespace std;
int freq[250][11];
bool viz[250];
int s, e;

int mini = 0;
bool calc(int x, int y)
{
    int sum = 0;
    for(int i=0;i<=9;i++)
    {
        sum+=min(freq[x][i], freq[y][i]);
    }
    if(sum==17)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        memset(freq,0, sizeof(freq));
        bool viz[250] = {0};
        cin>>n;

        cin>>s>>e;
        s--;
        e--;
        vector<int> v[250];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<20;j++)
            {
                freq[i][s[j]-'0']++;
            }
        }
        for(int i=0;i<n;i++)
            for(int j = 0; j<n;j++)
            {
              if(i!=j)
              {
                  if(calc(i,j))
                  {
                      v[i].push_back(j);
                  }
              }
            }
            queue<pair<int,int>>Q;
            Q.push(make_pair(s, 0));
            int mini = INT_MAX;
            viz[s] = 1;
            while(!Q.empty())
            {
                auto nod = Q.front();
                Q.pop();
                for(auto it: v[nod.first])
                    if(!viz[it])
                    {
                        if(it == e)
                        {
                            mini = nod.second+1;
                        }
                        viz[it] = 1;
                        Q.push(make_pair(it, nod.second+1));
                    }
            }
            if (s == e)
                mini = 0;
            if (mini != INT_MAX)
                cout<<mini<<'\n';
            else
                cout<<"-1\n";
    }
    return 0;
}
