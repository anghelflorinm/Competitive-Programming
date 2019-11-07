#include <iostream>

using namespace std;
int m, n, ramas,x, v[100005],deja;
int main()
{
    cin>>n>>m;
    ramas=n;
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        if(v[x]==0)
        {

            ramas--;
        }
        v[x]++;
        if(ramas==0)
        {
            cout<<1;
            for(int j=1;j<=n;j++)
                {
                    v[j]--;
                    if(v[j])
                        deja++;
                }
            ramas=n-deja;
            deja=0;

        }
        else cout<<0;
    }
    return 0;
}
