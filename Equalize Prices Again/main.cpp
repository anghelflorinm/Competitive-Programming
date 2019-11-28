#include <iostream>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        long long sum=0;;
        cin>>n;
        int cn = n;
        while(cn--)
        {
            long long x;
            cin>>x;
            sum+=x;
        }
        if(sum%n == 0)
        {
           cout<<sum/n<<'\n';
        }
        else
        {
            cout<<sum/n + 1<<'\n';
        }
    }
    return 0;
}
