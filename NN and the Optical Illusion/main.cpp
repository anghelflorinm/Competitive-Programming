#include <bits/stdc++.h>
#define PI 3.14159265
using namespace std;
double n,r;

int main()
{
    cin>>n>>r;

    double R=(r*sin((180/n)*PI/180)/(1-sin((180/n)*PI/180)));

   cout<<setprecision(7)<<R;
    return 0;
}
