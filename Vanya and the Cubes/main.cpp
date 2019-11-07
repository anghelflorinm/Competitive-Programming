#include <iostream>

using namespace std;
int n, i, maxsum;
int main()
{
    cin>>n;
    i=0;maxsum=0;
    while(maxsum<=n)
    {
        i++;
        maxsum=maxsum+(i*(i+1))/2;

    }
    cout<<i-1;
    return 0;
}
