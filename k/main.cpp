#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll i,k,j,l,m,n,ok,prec,urm,t,x,it;
ifstream fin("portofel.in");
ofstream fout("portofel.out");
bool ok_a;
vector<ll>v,a;
int main()
{       fin>>t;for(it=0;it<t;it++){
    fin>>n>>m;ll ans=0;
    fin>>prec;v.push_back(prec);
    for(ll i=0;i<n-1;i++)
    {
        fin>>x;
        if(x!=prec) {prec=x;v.push_back(prec);}

    }
    fin>>prec;a.push_back(prec);
for(ll i=0;i<m-1;i++)
    {
        fin>>x;
        if(x!=prec) {prec=x;a.push_back(prec);}

    }



    ll size_v=v.size();ll size_a=a.size();
    if(size_v==1){
        if(v[0]<=a[0]) fout<<1<<endl;
        else if(v[0]>=a[a.size()-1]) fout<<1<<endl;
        else fout<<2<<endl;
    }
   /* else if(size_v==2)
    {
        if(a[size_a-1]<=v[0]) fout<<1<<endl;
        else if(v[1]<=a[0]) fout<<1<<endl;
        else
        {   bool cyka;
            for(int kk=0;kk<size_a;kk++)
            if(a[kk]>=v[0] && a[kk]<=v[1]) {bool cyka=true;break;}
            if(cyka==true) fout<<3;
            else fout<<2;
        }
    }*/
    else
    {   //bool pus=false;
        i=0;j=0;
        while(i<size_v && j<size_a)
        {
            if(a[j]<v[i])
            {
                while(a[j]<=v[i] && j<size_a) j++;
                i++;ans++;
            }
            else i++;

        }
        //cout<<i<<' '<<j<<"assta "<<ans<<endl;
        /*if(i==size_v-1){
            if(a[j-1]>=v[i]) fout<<ans<<endl;else fout<<ans+1<<endl;


        }*/
        if(j<size_a)
        {
            fout<<ans+1<<endl;
        }
        if(j==size_a) fout<<ans<<endl;
    }

v.clear();a.clear();
}
    return 0;
}
