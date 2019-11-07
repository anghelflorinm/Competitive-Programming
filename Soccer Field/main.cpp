#include <iostream>

using namespace std;

int main()
{
    int l1,l2,h1,h2,a,b,c,d;
    cin>>l1>>h1>>l2>>h2;
    a=(l1+l2)*min(h1,h2);
    b=(l1+h2)*min(l2,h1);
    c=(h1+l2)*min(l1,h2);
    d=(h1+h2)*min(l1,l2);
    cout<<max(max(a,b),max(c,d));
    return 0;
}
