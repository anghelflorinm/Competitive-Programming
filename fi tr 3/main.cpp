#include <bits/stdc++.h>
using namespace std;
#define ll long long
int d[102][102];
int i,j,best_i,best_j;
int main()
{   string s;
    int n;int nr_t=0,nr_f=0;
    cin>>s>>n;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='T') nr_t++;
    }
    nr_f=s.size()-nr_t;
        //caz 0 f uri
        if(nr_f==0)
        {
            if(n<=nr_t) cout<<n;
            else cout<<s.size()-(1-(n-nr_t+1)%2);

        }
     else if(nr_t==n) cout<<s.size();
    else if(nr_t<n) cout<<s.size()-(1-(n-nr_t+1)%2);
    else
    {   for(i=0;i<s.size();i++){ ////nr_t > n
        if(s[i]=='T') d[i][i]=1;
    else d[i][i]=0;
    }
        for(i=0;i<s.size();i++)
        {
            for(j=i+1;j<s.size();j++)
            {
                if(s[j]=='T') d[i][j]=1+d[i][j-1];
                else d[i][j]=d[i][j-1];
                if(d[i][j]==n && j-i>best_j-best_i){best_i=i;best_j=j;}

            }
        }


//cout<<best_i<<"    ---     "<<best_j<<endl;
cout<<best_j-best_i+1;










        return 0;
        int best_st=0;int best_dr=0;
        int st=0;
        int dr=0;
while(dr<s.size()){
        while(s[dr]=='F' && dr<s.size()) dr++;
        if(dr-st>best_dr-best_st) {best_dr=dr;best_st=st;}
        while(s[dr]=='T')dr++;
        st=dr;

}

    }
    return 0;
}
