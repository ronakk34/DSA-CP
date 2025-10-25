// D. Odd Queries-->>

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
    ll n,q;
    cin >> n >> q;
    vector<ll> arr(n+1,0);
    vector<ll> pref(n+1,0);
    // ll pref[2005];
    ll sum = 0;
    for(int i = 1;i<=n;i++){
        cin >> arr[i];
        pref[i]=pref[i-1];
        pref[i]+=arr[i];
    }
    for(int i = 0;i<q;i++){
        ll l,r,k;
        cin >> l >> r >> k;
        ll ans = pref[n]-(pref[r]-pref[l-1])+(r-l+1)*k;
        if(ans%2==1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
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
