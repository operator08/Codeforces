#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
#define pb push_back

#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ["; debug_out(__VA_ARGS__)
template <typename T>
void debug_out(T t) { cerr << t << "]" << '\n'; }
template <typename T, typename... Args>
void debug_out(T t, Args... args) {
    cerr << t << ", ";
    debug_out(args...);
}

void solve(void) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> notInList(m), monocarpanswers(k);
    for (int i = 0; i < m; i++) {
        cin >> notInList[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> monocarpanswers[i];
    }
    // iterate list
    for (int i = 0; i < m; i++) {
        vector<bool> correctness(n - 1, 0);
        int p = 0;
        for (int j = 1; j <= n; j++) {
            if (notInList[i] != j) {
                for (int l = 0; l < k; l++) {
                    if (monocarpanswers[l] == j) {
                        correctness[p] = 1;
                        break;
                    }
                } 
                p++;
            }
        }
        bool ok = 1;
        for (int j = 0; j < n - 1; j++) {
            if (!correctness[j]) ok = 0;
        }
        cout << (ok ? 1 : 0);
    }
    cout << '\n';
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
