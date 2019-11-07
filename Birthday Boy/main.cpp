#include <bits/stdc++.h>

using namespace std;
struct date{
    int month;
    int day;
};
int n;
bool cmp(date a, date b)
{
    if(a.month<b.month)
        return true;
    if(a.month>b.month)
        return false;
    if(a.day<b.day)
        return true;
    return false;
}
int days[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int get_distance(date x, date y)
{
    int sum =0;
    if(x.month==y.month)
    {
        return y.day-x.day;
    }
    if(x.month<=y.month)
    {
       for(int i=x.month+1;i<y.month;i++)
        {
            sum+=days[i];

        }

        sum+=days[x.month]-x.day;
        sum+=y.day;
        return sum;
    }
    else
    {
        for (int i=x.month+1;i<13;i++)
            sum+=days[i];
        for(int i=1;i<y.month;i++)
            sum+=days[i];
        sum+=days[x.month]-x.day;
        sum+=y.day;
    }
    return sum;

}

int main()
{

    cin>>n;
    vector <date> v;

    for(int i=0;i<n;i++)
    {
        string ceva;
        cin>>ceva;
        cin>>ceva;
        string month=ceva.substr(0,2);
        string day = ceva.substr(3, 2);
        date aux;
        aux.month = atoi(month.c_str());
        aux.day = atoi(day.c_str());
        v.push_back(aux);
    }
    sort(v.begin(),v.end(),cmp);
    int maxim =0;
    bool clash;
    int index;
    date birthday={10,28};
    for(int i = 0; i<n-1; i++)
    {
        int res = get_distance(v[i], v[i+1]);
        cout<<res<<endl;
        if (res == maxim)
        {
            clash=true;
            continue;
        }
        if(res>maxim)
        {
            maxim = res;
            clash = false;
            index = i+1;
        }

    }
    int res = get_distance(v[n-1], v[0]);
    cout<<res<<endl;
        if (res == maxim)
        {
            clash==true;
        }
        if(res>maxim)
        {
            maxim = res;
            clash = false;
            index = 0;
        }

    if(clash==true)
    {
        cout<<"10-28";
    }
    else{
        if(v[index].day==1)
        {
            int m = v[index].month-1;
            if(m==0) m=12;
            if(m/10==0)
            {
                cout<<0<<m<<'-'<<days[m];
            }
            else
            {
                cout<<m<<'-'<<days[m];
            }
        }
        else
        {
            int d = v[index].day-1;
            int m = v[index].month;
            if(m/10==0)
            {
                cout<<0<<m;
            }
            else
            {
                cout<<m;
            }
            cout<<'-';
            if(d/10==0)
            {
                cout<<0<<d;
            }
            else
            {
                cout<<d;
            }

        }
    }
    return 0;

}
