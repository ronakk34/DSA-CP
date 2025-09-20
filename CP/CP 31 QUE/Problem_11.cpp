// A. Walking Master-->>

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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b>d){
        cout << "-1" << "\n";
    }
    else if(c>a+(d-b)){
        cout << "-1" << "\n";
    }
    else{
        cout << (d-b)+a+(d-b)-c << "\n";
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
