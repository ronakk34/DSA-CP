// B. Luke is a Foodie-->>

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
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    ll l = arr[0]-x;
    ll r = arr[0]+x;
    ll cost = 0;
    for(int i = 1;i<n;i++){
        l = max(l,arr[i]-x);
        r = min(r,arr[i]+x);
        if(l>r){
            l = arr[i]-x;
            r = arr[i]+x;
            cost++;
        }
    }
    cout << cost << endl;
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