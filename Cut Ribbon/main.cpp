#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int x, y, z;
    int maxi = -1;
    for(int x=0;x<=n;x++)
        for(int y=0;y<=n;y++)
    {
        if(a*x+b*y<=n){
        int aux= n - a*x - b*y;
        if(aux%c==0)
        {
            z=aux/c;
            if(x+y+z>maxi)
                maxi = x+y+z;
        }
        }

    }
    cout<<maxi;
    return 0;
}
