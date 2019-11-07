#include <bits/stdc++.h>

using namespace std;
string piese;
int iv=1, io=1, j0=2;

int main()
{
    cin>>piese;
    for(int i=0;i<piese.size();i++)
        if(piese[i]=='0')
    {
        cout<<iv<<" 1"<<endl;
        iv=iv+2;
        if(iv==5)
            iv=1;

    }
    else if(piese[i]=='1'){
            cout<<io<<" 2"<<endl;
            io=io+1;
            if(io==5)
                io=1;

    }
    return 0;
}
