#include <bits/stdc++.h>

using namespace std;


inline int gcd( long long  A, long long B, long long &X, long long &Y )
{
	if (B == 0)
	{
		X = 1;
		Y = 0;
		return A;
	}

	long long X0, Y0, D;
	D = gcd( B, A % B, X0, Y0 );

	X = Y0;
	Y = X0 - (A / B) * Y0;
	return D;
}

int main()
{
    long long n, p, d ,w,x, y;
    cin>>n>>p>>w>>d;
    int q = gcd(w, d, x, y);
    if(p%q!=0)
    {
        cout<<-1;
        return 0;
    }
    x*=(p/q);
    y*=(p/q);
    cout<<x<<" "<<y<<" "<<n-(x+y);
    return 0;
}
