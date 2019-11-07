#include <bits/stdc++.h>

using namespace std;

struct interval{
    int x, y, poz;
};

interval a[300005];
int n;

inline bool cmp(const interval A, const interval B) {
    if (A.x == B.x) return A.y > B.y;
    return A.x < B.x;
}

void Read() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
        a[i].poz = i;
    }
}

void Solve() {
    sort(a + 1, a + n + 1, cmp);
    for (int i = 2; i <= n; i++) {
        if (a[i].y <= a[i - 1].y) {
            cout << a[i].poz << " " << a[i - 1].poz;
            return;
        }
    }
    cout << "-1 -1";
}

int main()
{
    Read();
    Solve();
    return 0;
}
