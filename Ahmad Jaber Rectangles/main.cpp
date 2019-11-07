#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long x1, x2, x3, x4, h;
long long arie(long long a, long long b, long long h)
{
    return(abs(b-a)*h);
}
int main()
{
    cin>>x1>>x2>>x3>>x4>>h;
    if(x4<=x1&&x3<=x1)
    {
        cout<<0;
        //cout<<"aici1"<<endl;
    }
    else
    {
        if(x3>=x2&&x4>=x2)
        {
            cout<<0;
            //cout<<"aici7"<<endl;
        }
        else
        {
            if(x1<=x4&&x3<=x1&&x4<=x2)
            {
                cout<<arie(x1,x4,h);
                //cout<<"aici2"<<endl;
            }
            else
            {
                if(x3<=x2&&x4>=x2&&x3>=x1)
                {
                    cout<<arie(x3,x2,h);
                    //cout<<"aici3"<<endl;
                }
                else
                {
                    if(x1==x3&&x2==x4)
                    {
                        cout<<arie(x1,x2,h);
                        //cout<<"aici6"<<endl;
                    }
                    else
                    {
                        if(x3>=x1&&x4<=x2)
                        {
                            cout<<arie(x3,x4,h);
                           // cout<<"aici4"<<endl;
                        }
                        else
                        {
                            if(x1>=x3&&x2<=x4)
                            {
                                cout<<arie(x1,x2,h);
                               // cout<<"aici5"<<endl;
                            }
                        }
                    }
                }
            }

        }

    }









    return 0;
}
