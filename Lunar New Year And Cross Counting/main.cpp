#include <iostream>

using namespace std;
char s[505][505];
int n;
int k;
int x;
bool isin(int i,int j)
{
    if(i<0||i>n-1||j<0||j>n-1)
        return false;
    return true;
}
bool corect(int i, int j)
{
    if(!isin(i-1,j-1))
        return false;
     if(!isin(i+1,j+1))
        return false;
         if(!isin(i-1,j+1))
        return false;
         if(!isin(i+1,j-1))
        return false;
        return true;
}
int main()
{
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
            cin.getline(s[i],5005);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if(corect(i,j))
        {
            if(s[i][j]=='X'&&s[i][j]==s[i-1][j-1]&&s[i][j]==s[i+1][j+1]&&s[i][j]==s[i-1][j+1]&&s[i][j]==s[i+1][j-1])
                {k++;}

        }
    }
    cout<<k;
    return 0;
}
