#include <bits/stdc++.h>

using namespace std;
long n,k,A,B,x;
set <long> s;
void snap(long l, long h,long & nr, long & mini)
{
    nr=0;
    mini=0;
    if(h-l+1==1)
    {
        if(s.find(l)==s.end())
            {
                mini=mini+A;
            }
        else{
            mini=mini+B;
            nr++;
        }
    }
    else
    {
        snap(l,(l+h)/2,nr,mini);
        long cnr; long cmini;
        snap((l+h)/2+1,h,cnr,cmini);
        nr=nr+cnr;
        mini=mini+cmini;
        long mini1;
        if(nr==0)
        {
           mini1=A;
        }
        else mini1=(h-l+1)*nr*B;

        if(mini1<mini)
        {
            mini=mini1;
        }
    }
}
int main()
{
    cin>>n>>k>>A>>B;
    for(long i=1;i<=k;i++)
    {
        cin>>x;
        s.insert(x);
    }
    long minim=0;
    long nru=0;
    long length=1;
    long y=1;
    while(n!=0)
    {
        length=length*2;
        n--;
    }
    snap(y,length,nru,minim);
    cout<<minim;
    return 0;
}
