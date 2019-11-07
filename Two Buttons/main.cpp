#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int k=0;
    while(n!=m)
    {
        if(m<n)
    {
        cout<<k+(n-m);
        return 0;
    }
     else   if(m%2==0)
        {
            k++;
            m=m/2;
        }
        else
            {
                m++;
                m=m/2;
                k+=2;
            }

    }
    cout<<k;
    return 0;
}
