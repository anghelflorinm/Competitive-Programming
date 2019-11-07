#include <bits/stdc++.h>

using namespace std;

int main()
{
    float s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    float sp=(s1+s2+s3+s4)/2;
    float result = sqrt((sp-s1)*(sp-s2)*(sp-s3)*(sp-s4));
    cout<<setprecision(8)<<result;
    return 0;
}
