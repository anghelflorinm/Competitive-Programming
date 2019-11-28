#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[2];
    long long q, n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        cin>>s[0]>>s[1];
        //cout<<s[0]<<endl<<s[1];
        long long row = 0;
        long long i;
        for(i = 0; i<n; i++)
        {
           if(s[row%2][i]>='3')
           {
               if(s[(row+1)%2][i]<'3')
               {
                   break;
               }
               row+=1;
           }
        }
        if(row%2 == 1 && i == n)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
