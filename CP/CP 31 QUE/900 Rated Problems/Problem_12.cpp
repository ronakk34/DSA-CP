// A. Mainak and Array-->>

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
    ll n;
    cin >> n;
    ll second_max = 0;
    ll third_max = 0;
    ll fourth_max = 0;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    ll first_max = arr[n-1]-arr[0];
    for(int i = 1;i<n;i++){
        second_max = max(arr[i-1]-arr[i],second_max);

    }
    for(int i = 0 ;i<n;i++){
        third_max = max(arr[n-1]-arr[i],third_max);
        fourth_max = max(arr[i]-arr[0],fourth_max);
    }
    ll ans = max({first_max,second_max,third_max,fourth_max});
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
