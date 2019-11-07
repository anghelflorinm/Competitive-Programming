#include <fstream>
#include <bits/stdc++.h>
using namespace std;
ifstream fin("int.in");
ofstream fout("int.out");
struct interval{
    long long x, y;
};
interval a[50005];
int n,k, curent, i;
inline bool cmp(const interval A, const interval B) {
    return A.y < B.y;
}
int main()
{
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>a[i].x>>a[i].y;
    sort(a+1,a+n+1,cmp);
    if(n!=0)
    {k=1;
    curent=a[1].y;
    i=2;
    while(i!=n)
    {
        if(a[i].x>=curent)
        {
            k++;
            curent=a[i].y;
        }
        i++;
    }}
    else k=0;
    fout<<k;
    fin.close();
    fout.close();
    return 0;
}
