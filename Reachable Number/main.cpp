#include <iostream>

using namespace std;
int main()
{
    long long n;
    long long rasp=0;
    cin>>n;
    if(n==1)
    {
        rasp=-1;
    }
    if(n>=1&&n<=9)
    {
        cout<<9;
        return 0;
    }
    do
    {
        //cout<<"n "<<n<<endl;
        rasp++;
        n++;
        while(n%10==0)
        {
            n=n/10;
        }
    }while(n!=1);
    rasp++;
    cout<<rasp;
    return 0;
}
