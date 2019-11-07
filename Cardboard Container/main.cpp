#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V;
    cin>> V;
    int d = 1;
    int minim = 2147483647;
    for(int i=1;i<=V;i++)
    {
        if(V%i == 0)
        {
            int q=V/i;
            for(int j=1;j<=q;j++)
            {
                if(q%j==0)
                {
                    int w=q/j;
                    int temp = 2*i*w + 2*j*w + 2*i*j;
                    if(temp<minim)
                    {
                        minim = temp;
                    }
                }
            }
        }
    }
    cout<<minim;
    return 0;
}
