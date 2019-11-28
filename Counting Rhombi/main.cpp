#include <iostream>

using namespace std;
long long a[40000], b[400000];
void gen(long long v[], long long n)
{
    int i;
    for (i=1;i<=n/2;i++)
    {
        v[i] = v[i-1]+1;
    }
    if(n%2 == 0)
    {
        v[n/2] = v[n/2-1];
    }
    for( i = n/2 + 1; i<n; i++)
    {
        v[i] = v[i-1] -1;
    }

}
int main()
{
    long long w, h;
    cin>>w>>h;
    w++; h++;
    gen(a, w);
    gen(b, h);
    long long s = 0;
    for(int i = 0;i<w;i++)
        for(int j = 0; j<h;j++)
    {
        s+=a[i]*b[j];
    }
    cout<<s<<endl;
    return 0;
}
