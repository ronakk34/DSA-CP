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
    ll max = INT_MAX;
    ll min = INT_MIN;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        // if(arr[i]>max){
        // }
    }
    sort(arr.begin(),arr.end());
    if(arr[0]==arr[n-1]){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
        cout << arr[n-1] << " " << arr[0] << " ";
        for(int i = n-2;i>=1;i--){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   // if multiple test cases
    while(t--) {
        solve();
    }
}
