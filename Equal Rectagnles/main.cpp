#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int v[500];
        int n;
        cin>>n;
        for(int j=0;j<4*n;j++)
        {
            cin>>v[j];
        }
        sort(v,v+4*n);
        bool ok = true;
        int aria=-1;
        if((v[0]==v[1])&&(v[4*n-1]==v[4*n-2]))
            aria=v[0]*v[4*n-2];
        else {ok =false;cout<<"NO"<<endl; continue;}
        for(int j=0;j<2*n-1;j=j+2)
                if((v[j]!=v[j+1])||(v[4*n-j-1]!=v[4*n-j-2]))
                    {
                        cout<<"NO"<<endl;
                        ok=false;
                        break;
                    }
                else if(aria!=-1 && (v[j]*v[4*n-j-1])!=aria)
                {
                    cout<<"NO"<<endl;
                        ok=false;
                        break;
                }
        if(ok==true) cout<<"YES"<<endl;
    }
    return 0;
}
