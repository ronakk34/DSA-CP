// A. Strange Partition-->>

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
    ll n,x;
    cin >> n >> x;
    ll sum1 = 0;
    ll sum2 = 0;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        sum1+=arr[i];
        sum2+=(arr[i]+x-1)/x;
    }
    cout << (sum1+x-1)/x << " " << sum2 << endl;

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