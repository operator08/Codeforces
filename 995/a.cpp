#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
#define pb push_back;

#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ["; debug_out(__VA_ARGS__)
template <typename T>
void debug_out(T t) { cerr << t << "]" << '\n'; }
template <typename T, typename... Args>
void debug_out(T t, Args... args) {
    cerr << t << ", ";
    debug_out(args...);
}

void solve(void) {
    int n;
    cin >> n;
    vector<int> m(n);
    vector<int> s(n);
    for (auto& a : m) {
        cin >> a;
    }
    for (auto& a : s) {
        cin >> a;
    }
    int res = m[n - 1];
    for (int i = 0; i < n - 1; i++) {
        if (m[i] - s[i + 1] > 0) {
            res += m[i] - s[i + 1];
        } 
    }
    cout << res << '\n';
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
