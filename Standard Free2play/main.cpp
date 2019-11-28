#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long h , n;
        cin>>h>>n;
        vector<long long>v;
        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        long long crystal = 0;
        //long long start = h;
        /*while(start>0)
        {
            if(s.find(start-1) == s.end())
            {
                start -- ;
                continue;
            }
            if(s.find(start - 2) == s.end()&& start > 2)
            {
                crystal++;
            }
            start = start - 2;
        }*/
        long long start = h;
        for(long long i = 0; i< v.size();i++)
        {
            if(start <= 0)
            {
                break;
            }
            if(i<v.size() - 1)
            {
                if(v[i+1] != start-1)
                {
                    start --;
                    i++;
                    continue;
                }
                if(v[i + 1] !=  start-2 && start>2)
                {
                    crystal ++;
                }
            }
        }
        cout<<crystal<<endl;
    }
    return 0;
}
