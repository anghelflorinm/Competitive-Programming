#include <bits/stdc++.h>

using namespace std;
void shiftleft(int v[], int n)
{
    int aux=v[0];
    for(int i=1;i<n;i++)
    {
        v[i-1]=v[i];
    }
    v[n-1]=aux;
}
int shiftright(int v[], int n)
{
    int aux=v[n-1];
    for(int i=n-2;i=0;i--)
    {
        v[i+1]=v[i];
    }
    v[0]=aux;
}
bool checksorted1(int v[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
            return false;

    }
    return true;
}
bool checksorted2(int v[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<v[i+1])
            return false;

    }
    return true;
}

int main()
{
    int q;
    cin>>q;
    for(int r=0;r<q;r++)
    {
        int n;
        cin>>n;
        int v[300];
        bool rev = false;
        for(int i =0;i<n;i++)
            {
                cin>>v[i];

            }
        bool ok =false;
        for(int i=0;i<n;i++)
        {
            if((v[0]==1&&v[n-1]==n)||(v[0]==n&&v[n-1]==1))
            {
                if(checksorted1(v,n))
                {
                    ok = true;
                    break;
                }
                else if(checksorted2(v,n))
                {
                    ok = true;
                    break;
                }
                else{
                    break;
                }
            }
            shiftleft(v,n);
        }
        if(ok==true)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
