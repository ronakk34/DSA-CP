// A. Mocha and Math-->>

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
    vector<ll> arr(n);
    
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        // if(arr[i]<ans){
            //     ans = arr[i];
            // }
        }
    ll ans = arr[0];
    for(int i = 1;i<n;i++){
        ans=ans&arr[i];
    }
    cout << ans << endl;
    // for(int i = 0;i<n;i++){
    //     arr[i]=arr[i]&arr[n-1-i];
    //     ans = min(ans,arr[i]);
    // }
    // cout << ans << endl;
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