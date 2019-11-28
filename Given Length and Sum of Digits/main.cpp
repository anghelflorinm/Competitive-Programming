#include <iostream>

using namespace std;
bool can(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}
int main()
{
    int m, s;
    cin>>m>>s;
    string minn;
    string maxn;
    int sum = s;
        for(int i=0;i<m;i++)
        for(int d=0;d<10;d++)
            if((i>0 || d>0 || (m==1 && d==0)) && can(m-i-1, sum-d))
            {
                minn += char('0'+d);
                sum-=d;
                break;
            }
            if(minn.length()==m)
            cout<<minn<<' ';
            else {cout<<"-1 -1"; return 0;}
            sum = s;
        for(int i=0;i<m;i++)
            for(int d=9;d>=0;d--)
                if((i>0 || d>0 || (m==1 && d==0)) && can(m-i-1, sum-d))
                {
                    maxn +=char('0'+d);
                    sum-=d;
                    break;
                }
            cout<<maxn;

    return 0;
}
