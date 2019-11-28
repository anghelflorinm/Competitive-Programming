#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long q;
    cin>>q;
    while(q--)
    {
        long long n, r;
        cin>>n>>r;
        set<long long> v;
        for(long long i= 0; i<n;i++ )
        {
            long long x;
            cin>>x;
            v.insert(x);
        }
        int k=0;
        if(v.size()==1)
        {
            cout<<1<<endl;
            continue;
        }
        for(auto rit = v.rbegin();rit!=v.rend();rit++)
        {
            //cout<<"Rit "<<*rit<<endl;
            //cout<<"NUm "<<*rit-k*r<<endl;
            /*if(*rit-k*r<=0)
            {
                break;
            }*/k++;
                    auto temp = rit;
                rit++;
                if((rit)!=v.rend() && *(rit)-k*r<=0)
                   {
                       break;
                   }
                   //k++;

                   rit = temp;
        }
        cout<<k<<endl;
    }
    return 0;
}
