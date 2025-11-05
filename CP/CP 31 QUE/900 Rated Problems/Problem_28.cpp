// B. Sum of Medians-->>

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
    ll n,k;
    cin >> n >> k;
    vector<ll> arr(n*k+1);
    for(int i = 1;i<=n*k;i++){
        cin >> arr[i];
    }
    ll x = n/2;
    ll ans = 0;
    for(int i = x;i<=n*k;i+=n){
        ans+=arr[i];
    }
    cout << ans << endl;

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