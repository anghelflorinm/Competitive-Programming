#include <iostream>

using namespace std;

int main()
{
    long n, a, b, s;
    long s1=0;
    cin>>n>>a>>b>>s;
    if((s>=n*a)&&(s<=n*b))
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
