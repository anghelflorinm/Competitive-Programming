#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin>>n>>m;
    long long maxi = ((n-(m-1)-1)*(n-(m-1)))/2;
    cout<<maxi;
    return 0;
}
