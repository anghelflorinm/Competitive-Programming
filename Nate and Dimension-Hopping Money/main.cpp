#include <bits/stdc++.h>

using namespace std;
double lu, ma, mi , j ,v, x, y;
int main()
{
    cin>>lu>>x>>y;
    mi=10000-100*x;
    mi/=(10000-100*y+x*y);
    mi*=lu;
    ma=lu+ (y/100)*mi;
    j=mi-(y/100)*mi;
    cout<<fixed<<setprecision(6)<<lu<<' '<<ma<<' '<<' '<<mi<<' '<<j<<' '<<j;
    return 0;
}
