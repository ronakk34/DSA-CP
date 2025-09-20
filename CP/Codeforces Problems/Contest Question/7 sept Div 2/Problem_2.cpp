// B. Cake Collection-->>

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl "\n"

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void solve() {
    // int max_cake = 0;
    ll n,m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    ll max_cake = 0;
    sort(arr.begin(),arr.end(), greater<int>());
    for(int i = 0;i<n;i++){
       max_cake = max(max_cake, 1LL * arr[i] * max(0LL, m - i));
    }
    cout << max_cake << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   // if multiple test cases
    while(t--) {
        solve();
    }
}
