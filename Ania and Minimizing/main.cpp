#include <bits/stdc++.h>

using namespace std;
char s[2000000];
    int k;
    int n;
int main()
{

    cin>>n>>k>>s;
    if(k==0)
    {
        cout<<s;
        return 0;
    }
    if(n == 1)
    {
        cout<<"0";
        return 0;
    }

    for(int i = 0 ; i<n; i++)
    {
        if(i==0)
        {
            if(s[i] == '1')
            {
              continue;
            }
            else
            {
                if(k)
                {
                  s[i] = '1';
                    k--;
                    continue;
                }

            }

        }
        if(s[i]!='0' && k)
        {
            s[i] = '0';
            k--;
        }
    }
    cout<<s;
    return 0;
}
