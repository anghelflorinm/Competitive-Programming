#include <iostream>
#include <fstream>
using namespace std;
fstream fin("euclid3.in");
ofstream fout("euclid3.out");
void euclid(int a, int b, int &d, int &x, int &y)
{
    if (b == 0) {
        d = a;
        x = 1;
        y = 0;
    } else {
        int x0, y0;
        euclid(b, a % b, d, x0, y0);
        x = y0;
        y = x0 - (a / b) * y0;
    }
}
int euclid1(int a, int b)
{
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    int T, x, y, a, b,c,d;
    fin>>T;
    for(int i=0;i<T;i++)
    {
        fin>>a>>b>>c;
        d=euclid1(a,b);
        if(c%d==0)
        {
            euclid(a,b,d,x,y);
            x*=(c/d);
            y*=(c/d);
            fout<<x<<" "<<y<<'\n';
        }
        else
        {
            fout<<0<<' '<<0<<'\n';
        }

    }
    return 0;
}
