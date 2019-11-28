#include <bits/stdc++.h>

using namespace std;

ifstream in("jocgraf.in");
ofstream out("jocgraf.out");

int main()
{
    ios_base::sync_with_stdio(0);
    in.tie(0);

    int t;
    in >> t;

    while(t--)
    {
        int n, m;
        in >> n >> m;

        vector<int> v_noduri(n);
        map<pair<int,int>,int> v_muchii;

        for(int i = 0; i < n; i++)
        {
            int v;
            in >> v;

            v_noduri[i] = v;
        }

        for(int i = 0; i < m; i++)
        {
            int x, y, v;
            in >> x >> y >> v;

            v_muchii[{x,y}] = v;
            v_muchii[{y,x}] = v;
        }


    }

    return 0;
}
