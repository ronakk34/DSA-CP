// A. We Need the Zero--->>

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
    ll n;
    cin >> n;
    ll xorr = 0;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        xorr = xorr^arr[i];
    }
    if(n%2==0 && xorr == 0){
        cout << "0" << endl;
    }
    else if(n%2==1){
        cout << xorr << endl;
    }
    else{
        cout << "-1" << endl;
    }
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
