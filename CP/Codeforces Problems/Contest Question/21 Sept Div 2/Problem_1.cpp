// A. Equal Occurrences-->>

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
    vector<ll> arr(n);
    map<ll,ll>freq;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    if(arr[0]==arr[n-1]){
        cout << n << endl;
    }
    else{
        ll mxlength= 0;
        for(auto &x:freq){
            ll count = 0;
            for(auto &y:freq){
                if(y.second>=x.second){
                    count++;
                }
            }
            mxlength = max(mxlength, count*x.second);
            // count = 0;
        }
        cout << mxlength << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   
    while(t--) {
        solve();
    }
}
