// A. Round Trip->>

// A. Round Trip -->

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl "\n"

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void RON() {
    ll r0, x, d, n;
    cin >> r0 >> x >> d >> n;
    string s;
    cin >> s;

    ll L = r0, R = r0; 
    ll cnt = 0;        

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            L = max(0LL, L - d);
            R = R + d;
            cnt++;
        } 
        else {

            if (L >= x) break; // no longer eligible
            L = max(0LL, L - d);
            R = min(x - 1, R + d); // stay below X
            if (L > R) break;      // range invalid
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;   
    while (t--) {
        RON();
    }
}
