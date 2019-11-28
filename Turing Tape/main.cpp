#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    string s;
    getline(cin, s);
    s = " " + s;
    vector<int> answer(s.length());
    vector<int> previous(s.length());
    for(int i = 1 ;i<s.length();i++)
    {
        char num = s[i];
        vector<char> binary;
        binary.reserve(9);
        for(int j = 7; j>=0; j--)
        {
            binary[j] = num%2;
            num = num/2;
        }
        int p = 1;
        char new_num=0;
        for(int j = 0; j<8;j++)
        {
            new_num += binary[j]*p;
            p*=2;
        }
        previous[i] = new_num;
        //cout<<(int)new_num<<endl;
        int res = (previous[i-1] - new_num)%256;
        if(res < 0)
        {
            res+=256;
        }
        else if(res > 256)
        {
            res-=256;
        }
        answer[i] = res;
    }
    for(int i = 1; i<answer.size(); i++)
    {
        cout<<(int)answer[i]<<endl;
    }
    return 0;
}
