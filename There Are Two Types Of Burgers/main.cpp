#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin>>t;

    for(long long i=0; i<t; i++)
    {
        long long b, p, f;
        cin>>b>>p>>f;
        long long h, c;
        cin>>h>>c;
        long long nr_burgers=min(b/2,p+f);
        long long maxsum = 0;
        for(long long j=0;j<=nr_burgers;j++)
        {
          if(maxsum<j*h+(nr_burgers-j)*c && (j<=p) && ((nr_burgers-j)<=f))
          {
              maxsum = j*h+(nr_burgers-j)*c;
          }
        }
        cout<<maxsum<<endl;
    }
    return 0;
}
