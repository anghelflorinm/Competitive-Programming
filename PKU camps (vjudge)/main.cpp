#include <bits/stdc++.h>

using namespace std;
int cost[6000], pisici[6000], f, n, m, x, pisicilibere,k;
int j;
int main()
{
    while(cin>>m>>n>>x)
    {
        for(int i=1;i<=n;i++)
           {
               cin>>cost[i];
               pisici[i]=0;
           }
        sort(cost+1, cost+n+1);
        pisicilibere=n;
        k=0;
        int cm=m;
        if(x==0)
        {
            cout<<x<<" "<<0<<endl;
            continue;
        }
        while(x!=0)
        {
            j=0;
            while(pisicilibere!=0&&m!=0)
            {
                j++;
                if(pisici[j]==0)
                {
                    pisici[j]=cost[j];
                    m--;
                    pisicilibere--;
                }
            }
            for(int i=1;i<=n;i++)
            {
                if(pisici[i]!=0)
                {
                    pisici[i]--;
                    if(pisici[i]==0)
                {
                    pisicilibere++;
                    k++;

                }
                }
            }
            x--;
        }
        cout<<cm-k-(n-pisicilibere)<<" "<<n-pisicilibere<<endl;

    }
    return 0;
}
