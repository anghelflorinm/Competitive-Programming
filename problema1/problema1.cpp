#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    cin>>x;
    float s0=x;
    float sn=s0-(x*x)/2;
    float p=x*x;
    float putere=2;
    float semn=1;
    while (abs(sn-s0)>0.001)
    {
        s0=sn;
        p=p*x;
        putere++;
        sn=s0+semn*(p/putere);
        semn=semn*(-1);
    }
    cout<<sn;

    return 0;
}
