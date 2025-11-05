// A. Exciting Bets-->>

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
    ll a,b;
    cin >> a >> b;
    if(a==b){
        cout << "0" << " " << "0" << endl;
    }
    else{
        ll ans = abs(a-b);
        ll ans1 = min(a%ans,ans-a%ans);
        cout << ans << " " << ans1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   
    while(t--) {
        RON();
    }
}