#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> L(n, -1), R(n, -1);

    int last = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') last = i;
        L[i] = last;
    }
    last = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') last = i;
        R[i] = last;
    }

    string res = s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            int distL = (L[i] == -1) ? 2e9 : i - L[i];
            int distR = (R[i] == -1) ? 2e9 : R[i] - i;

            int minDist = min(distL, distR);
            if (minDist <= m) {
                if (distL == distR) continue; 
                res[i] = '1';
            }
        }
    }
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}