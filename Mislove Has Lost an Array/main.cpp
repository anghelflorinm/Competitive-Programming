#include <iostream>

using namespace std;

int main()
{
    long long n, l , r;
    cin>>n>>l>>r;
    long long v[100];
    v[1]=1;
    long long sp[100];
    sp[1]=1;
    for(int i=2;i<22;i++)
    {
        v[i]=v[i-1]*2;
        sp[i]=sp[i-1]+v[i];
    }

    long long mini = sp[l] + (n-l);
    long long maxi = sp[r] + (n-r)*v[r];
    cout<<mini<<' '<<maxi;
    return 0;
}
