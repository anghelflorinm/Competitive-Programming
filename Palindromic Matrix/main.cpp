#include <bits/stdc++.h>

using namespace std;
int m[1000][1000], n, v[1010],impar,nrimpar,gasitimpar, maxim;
bool verificare()
{
    for(int i=1;i<=maxim;i++)
    {
        if(v[i]!=0)
        {
        if(v[i]%4==0)
        {
            v[i]=v[i]/4;
            continue;
        }
        else {
                if(v[i]%2==1&&(v[i]-1)%4==0&&impar==1)
                {
                    if(gasitimpar==0)
                    {
                        gasitimpar=1;
                        nrimpar=i;
                        v[i]=(v[i]-1)/4;
                    }
                    else return false;
                }
                else return false;
            }
        }
    }
    return true;
}
int main()
{
    cin>>n;
    if(n%2==1)
    {
        impar=1;
    }
    for(int i=1;i<=n*n;i++)
    {
        int x;
        cin>>x;
        if(x>maxim)
            maxim=x;
        v[x]++;


    }
    int x=1;
    if (verificare()==true)
    {
        switch(impar)
        {
            case 0:
        for(int i=1;i<=n/2;i++)
            for(int j=1;j<=n/2;j++)
            {
                if(i==(n+1)/2&&j==(n+1)/2&&impar==1)
                {
                    continue;
                }
               while(v[x]==0)
               {
                   x++;
               }

               m[i][j]=x;
               m[n-i+1][j]=x;
               m[i][n-j+1]=x;
               m[n-i+1][n-j+1]=x;
               v[x]--;

            }
             cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cout<<m[i][j]<<" ";
            cout<<endl;


        }
        break;
            case 1:
                for(int i=1;i<=(n+1)/2-1;i++)
            for(int j=1;j<=(n+1)/2;j++)
            {
                if(i==(n+1)/2&&j==(n+1)/2&&impar==1)
                {
                    continue;
                }
               while(v[x]==0)
               {
                   x++;
               }
                if(j==((n+1)/2))
                   {
                     m[i][j]=x;
                     m[j][i]=x;
                     m[j][n-i+1]=x;
                     m[n-i+1][j]=x;
                   }
                else{
                    m[i][j]=x;
               m[n-i+1][j]=x;
               m[i][n-j+1]=x;
               m[n-i+1][n-j+1]=x;


                }
                v[x]--;

            }
            if(impar==1)
    {
        m[(n+1)/2][(n+1)/2]=nrimpar;
    }
             cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cout<<m[i][j]<<" ";
            cout<<endl;


        }

    }
    }

    else cout<<"NO";
    if(impar==1)
    {
        m[(n+1)/2][(n+1)/2]=nrimpar;
    }


    return 0;
}
