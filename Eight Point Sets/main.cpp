#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<long long> s1, s2;
    set<pair<long long , long long >> v;

    long long n = 8;
    while(n--)
    {

        long long x, y;
        cin>>x>>y;
        s1.insert(x);
        s2.insert(y);
        v.insert(make_pair(x,y));
    }

    if(s1.size()!=3 || s2.size()!=3)
    {
        cout<<"ugly";
        return 0;
    }
    long long i = 1;
    long long j = 1;
    for(auto it1 = s1.begin();it1!=s1.end();it1++,i++)
    {
        j =1;
        for(auto it2 = s2.begin();it2!=s2.end();it2++,j++)
    {
            if(i == 2 && j ==2)
            {
               if(v.find(make_pair(*it1,*it2))!=v.end())
               {
                   cout<<"ugly";
                   return 0;
               }
            }
            else{
                if(v.find(make_pair(*it1,*it2))==v.end())
               {
                   cout<<"ugly";
                   return 0;
               }
            }
    }
    }
    cout<<"respectable";
    return 0;
}
