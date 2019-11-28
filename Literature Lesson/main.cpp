#include <bits/stdc++.h>

using namespace std;
int get_pos(string&s, long long k)
{
    long long p=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(strchr("aeiou",s[i]))
            p++;
        if(p==k)
        {
            return i;
        }
    }
    cout<<"NO";
    exit(0);
}
long long p[30000];
int main()
{

    long long n, k;
    cin>>n>>k;
    long long cn = n;
    int i = 0;
    while(cn--)
    {
        string s[5];
        bool r[5][5];
        int poz[5];
        for(int i = 1;i<=4;i++)
            {
               cin>>s[i];
               poz[i] = get_pos(s[i], k);
            }
        for(int i=1;i<4;i++)
            for(int j = i+1;j<=4;j++)
                if(i!=j)
            {
                if(strcmp(s[i].c_str()+poz[i],s[j].c_str()+poz[j])==0)
                {
                    r[i][j] = true;
                    r[j][i] = true;
                }
                else
                {
                    r[i][j] = false;
                    r[j][i] = false;
                }
            }
        if(r[1][2]&&r[2][3]&&r[3][4]&&r[1][4]&&r[2][4]&&r[1][3])
        {
            p[i] = 1;
            i++;
            continue;
        }
        if(r[1][2]&&r[3][4])
        {
            p[i] = 2;
            i++;
            continue;
        }
        if(r[1][4]&&r[2][3])
        {
            p[i] = 3;
            i++;
            continue;
        }
        if(r[1][3]&&r[2][4])
        {
            p[i] = 4;
            i++;
            continue;
        }
        cout<<"NO";
        return 0;

    }
    int f = -1;
    for(int i = 0;i<n;i++)
    {
        if(p[i]!=1)
        {
            if(f==-1)
            {
                f = p[i];
            }
            else
            {
                if(f!=p[i])
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    switch(f)
    {
    case -1:
        cout<<"aaaa";
        break;
    case 2:
        cout<<"aabb";
        break;
    case 3:
        cout<<"abba";
        break;
    case 4:
        cout<<"abab";
    }
    return 0;
}
