#include <bits/stdc++.h>

using namespace std;
struct invest{
    int per_day;
    int original;
    int nr_days;
    int remaining;
};
int main()
{
    int n, minimum;
    cin>>n>>minimum;
    vector<invest> v;
    for(int i=0;i<n;i++)
    {
        invest aux;
        cin>>aux.per_day>>aux.original;
        v.push_back(aux);
        int k=1;
        while(k * aux.per_day <aux.original)
        {

        }
    }
    return 0;
}
