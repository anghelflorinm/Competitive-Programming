#include <iostream>

using namespace std;

int main()
{
    long long t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==7)
            {cout<<3<<endl; continue;}
        if(n==1)
            {cout<<-1<<endl; continue;}
        long long k = 0;
        k+= 2*(n/11);
        n = n%11;

        switch(n)
        {
        case 1:
            k+=1;
            break;
        case 2:
            k+=1;
            break;
        case 3:
            k+=1;
            break;
        case 4:
            k+=1;
            break;
        case 5:
            k+=1;
            break;
        case 6:
            k+=2;
            break;
        case 7:
            k+=2;
            break;
        case 8:
            k+=2;
            break;
        case 9:
            k+=2;
            break;
        case 10:
            k+=2;
            break;

        }
        cout<<k<<endl;
    }
    return 0;
}
