// B. Olya and Game with Arrays-->>


// RON IS HERE..

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
    ll min_val = INT_MAX;
    ll min_vall = INT_MAX;
    ll sum = 0;
    while(n--){
        ll m;
        cin >> m;
        ll minn = INT_MAX;
        vector<ll> arr(m);
        for(int i = 0;i<m;i++){
            cin >> arr[i];
            if(arr[i]<minn){
                minn = arr[i];
            }
        }
        min_val = min(min_val,minn);
        sort(arr.begin(),arr.end());
        sum+=arr[1];
        min_vall = min(min_vall,arr[1]);  
    }
    cout << sum-min_vall+min_val << endl;

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