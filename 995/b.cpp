#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
#define pb push_back;

void solve(void) {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    i64 day = n / (a + b + c) * 3;
    i64 km = (a + b + c) * day / 3;
    while (km < n) {
        if (day % 3 == 0) {
            km += a;
        } else if (day % 3 == 1) {
            km += b;
        } else {
            km += c;
        }
        day++;
    }
    cout << day << '\n';
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
