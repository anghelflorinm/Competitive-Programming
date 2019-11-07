#include <iostream>

using namespace std;
long long x;
long long k;
long long lipsa[1000001],nr[10000001];
int main()
{
    cin>>x;
    while(x!=0)
    {
        long long i=0;
        long long p=1;
        while(i<=x)
        {
            i=i+p;
            p++;
        }
        p--;
        lipsa[k]=i-x;
        nr[k++]=p;
        cin>>x;
    }
    for(int i=0;i<k;i++)
    {
        cout<<lipsa[i]<<" "<<nr[i]<<endl;
    }
    return 0;
}
