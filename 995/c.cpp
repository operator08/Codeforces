#include <bits/stdc++.h>

using namespace std;

#define pb push_back
typedef long long i64;

void solve(void) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> notInList(m), wrongAnswers;
    vector<bool> monocarpAnswers(n + 1, 0);
    for (int i = 0; i < m; i++) {
        cin >> notInList[i];
    }
    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        monocarpAnswers[a] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (!monocarpAnswers[i]) wrongAnswers.pb(i);
    }
    n = wrongAnswers.size();
    if (n == 1) {
        for (int i = 0; i < m; i++) {
            cout << (notInList[i] == wrongAnswers[0] ? 1 : 0);
        }
    } else if (n >= 2) {
        for (int i = 0; i < m; i++) cout << 0;
    } else {
        for (int i = 0; i < m; i++) cout << 1;
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
