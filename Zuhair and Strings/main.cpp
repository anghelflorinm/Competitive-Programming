#include <bits/stdc++.h>

using namespace std;
string s;
string f;
string g;
string p;
string aux1;
string aux2;
long n, k, found,j,ct,ctmax,check;
int corect(string h)
{
    for(int i=0; i<k; i++)
        if(h[i]!=h[0])
            return i;
    return k;


}

int main()
{
    cin>>n>>k;
    cin>>s;
    ctmax=0;
    for(int i=0; i<n-k; i++)
    {
        j=i+k-1;
        f=s.substr(i,k);
        check=corect(f);
        if(check==k)
        {
            g=s.substr(j+1,n-1);
            found=g.find(f);
            ct=1;
            while(found!=std::string::npos)
            {
                ct++;
                //g=g.substr(found+k,n-1);
                aux1=g.substr(0,found);
                aux2=g.substr(found+k,n-1);
                g=aux1+aux2;
                found=g.find(f);
                n=n-k;
            }
            if(ct>ctmax)
            {
                ctmax=ct;
            }
            aux1=s.substr(0,i);
            s=aux1+f+g;

        }




    }
    if(n==k)
    {
        if(corect(s)==k)
            cout<<1;
        else cout<<0;

    }

   else cout<<ctmax;


    return 0;
}

