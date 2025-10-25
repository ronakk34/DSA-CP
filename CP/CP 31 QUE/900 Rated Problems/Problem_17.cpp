// B. Array Cloning Technique-->>

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
    map<ll,ll> freq;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    ll maxfreq = 0;
    for(auto &p : freq){
        if(p.second>maxfreq){
            maxfreq = p.second;
        }
    }
    sort(arr.begin(),arr.end());
    if(arr[n-1]==arr[0] || n==1){
        cout << "0" << endl;
    }
    else{
        ll ans = n-maxfreq;
        while(maxfreq<n){
            ans++;
            // disctinc_val-=maxfreq;
            maxfreq+=maxfreq;
            
        }
        cout << ans << endl;
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
