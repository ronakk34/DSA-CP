// B. Array merging-->>


#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n + 1), b(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<ll> fa(2*n + 5, 0), fb(2*n + 5, 0);


        ll p = 1;
        for (int i = 2; i <= n; i++) {
            if (a[i] != a[i - 1]) {
                fa[a[i - 1]] = max(fa[a[i - 1]], (ll)(i - p));
                p = i;
            }
        }
        fa[a[n]] = max(fa[a[n]], (ll)(n - p + 1));

        p = 1;
        for (int i = 2; i <= n; i++) {
            if (b[i] != b[i - 1]) {
                fb[b[i - 1]] = max(fb[b[i - 1]], (ll)(i - p));
                p = i;
            }
        }
        fb[b[n]] = max(fb[b[n]], (ll)(n - p + 1));

        ll ans = 0;
        for (int i = 1; i <= 2*n; i++) {
            ans = max(ans, fa[i] + fb[i]);
        }

        cout << ans << "\n";
    }
}
