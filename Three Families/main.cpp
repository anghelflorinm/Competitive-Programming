#include <iostream>

using namespace std;
int T,k;
float x, y, z, t, q, a;
float v[101];
int main()
{
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>x>>y>>z;
        t=x+y;
        q=t/3;
        a=(x-q)*z;
        a=a/q;
        v[k++]=a;
    }
    for(int k=0;k<T;k++)
        cout<<v[k]<<endl;
    return 0;
}
