A. Alice and Bob


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
    ll n,a;
    cin >> n >> a;
    ll min_diff = LLONG_MAX;
    vector<ll> arr(n);
    ll location ;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i =0;i<n;i++){
        ll diff = abs(arr[i]-a);
        min_diff = min(abs(arr[i]-a),min_diff);
    }
    for(int i = 0;i<n;i++){
        
    }
    if(location-2>n-location+1){
        cout << arr[location-2] << endl;
    }
    else if(location-2<n-location+1){
        cout << arr[location] << endl;
    }
    else{
        cout << arr[0] << endl;
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