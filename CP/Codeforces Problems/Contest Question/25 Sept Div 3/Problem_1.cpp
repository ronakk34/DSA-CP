// A. Be Positive-->>

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
    vector<ll>arr(n);
    ll neg_ones = 0;
    ll zeroes = 0;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==0){
            zeroes++;
        }
        if(arr[i]==-1){
            neg_ones++;
        }
    }
    if(neg_ones%2==0){
        cout << zeroes << endl;
    }
    else{
        cout << 2+zeroes << endl;
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
