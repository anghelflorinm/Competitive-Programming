#include <iostream>

using namespace std;
long long x, n, m,t;
int main()
{
    cin>>t;
    while(t--)
    {
        long long p1=0, i1=0, p2=0, i2=0;
        cin>>n;
        while(n--)
        {
            long long x;
            cin>>x;
            if(x%2==0)p1++;else i1++;
        }
        cin>>m;
        while(m--)
        {
            long long x;
            cin>>x;
            if(x%2==0)p2++;else i2++;
        }
        cout<<(p1*p2)+(i1*i2)<<endl;
    }
    return 0;
}
