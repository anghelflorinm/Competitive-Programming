#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n, a, b;
        string s;
        cin>>n>>a>>b;
        cin>>s;
        bool go_down = false;
        bool up= false;
        if(5*b + 4*a < 6*b + 2*a)
        {
            go_down = true;
        }
        long long sum = b;
        for(long long j=0; j<n-1;j++)
        {
            if(s[j+1]=='1' && up == false)
            {
                up =true;
                sum+= 2*a + 2*b;
                continue;
            }
            if(s[j]=='0' && up == true)
            {
                if(go_down)
                {
                    up = false;
                    sum += (2*a +b);
                    continue;
                }
                else
                {
                    sum+= (a+ 2*b);
                }
                continue;
            }
            if(s[j]=='0' && up == false)
            {
                sum+=(a+b);
                continue;
            }
            if(s[j+1]=='1' && up == true)
            {
                sum+=(a + 2*b);
                continue;
            }
        }
        if(up)
        {
            sum+=(2*a+b);
        }
        else
        {
            sum+=(a+b);
        }
        cout<<sum<<endl;
    }
    return 0;
}
