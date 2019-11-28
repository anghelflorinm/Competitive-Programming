#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3 ,x4, y4;
    cin>>x1>>y1>>x2>>y2;
    int a1 = x2-x1;
    int a2 = y2-y1;
    int a;
    if(a1!=0 && a2 != 0 )
    {
        if(abs(a1)!=abs(a2))
        {
            cout<<-1;
            return 0;
        }
    }
    if(a1 == 0)
    {
        cout<<x1+a2<<" "<<y1<<" "<<x1+a2<<" "<<y1+a2;
    }
    else if(a2 == 0)
    {
        cout<<x1<<" "<<y1+a1<<" "<<x1+a1<<" "<<y1+a1;
    }
    else
    {
        cout<<x1<<" "<<y1+a1<<" "<<x1+a1<<" "<<y1;
    }
    return 0;
}
