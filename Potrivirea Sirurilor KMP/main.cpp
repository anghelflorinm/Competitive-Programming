#include <bits/stdc++.h>

using namespace std;
string s1;
string s2;
int pi[2000006];
vector<int>result;
ifstream fin("strmatch.in");
ofstream fout("strmatch.out");
void functie_prefix(string &N)
{
   int n = N.length()-1;
   int k = 0;
   pi[1] = 0;
   for(int i = 2; i<=n;i++)
   {
       while(k>0 && (N[k+1] != N[i]))
             {
                 k=pi[k];
             }
        if (N[k+1]==N[i])
            {
                k = k+1;
            }
        pi[i]=k;
   }
}
void KMP(string &N, string &M)
{
    int n = N.length()-1;
    int m = M.length()-1;
    int q = 0;
    for (int i = 1; i<=m; i++)
    {
        while(q>0 && (N[q+1]!=M[i]))
        {
            q = pi[q];
        }
        if(N[q + 1] == M[i])
        {
            q=q+1;
        }
        if(q == n)
        {
            result.push_back((i-n));
        }
    }
}
int main()
{
    fin>>s1>>s2;
    s1='0' + s1;

    s2='0' + s2;
    functie_prefix(s1);
    KMP(s1,s2);
    fout<<result.size()<<'\n';
    for(int i=0;i<min((int)result.size(),1000);i++)
    {
        fout<<result[i]<<' ';
    }
    return 0;
}
