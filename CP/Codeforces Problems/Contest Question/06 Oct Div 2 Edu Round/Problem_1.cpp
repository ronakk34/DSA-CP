// A. Candies for Nephews-->>

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
    int rem = n%3;
    if(n%3==0){
        cout << "0" << endl;
    }
    else if(rem==1){
        cout << "2" << endl;
    }
    else{
        cout << "1" << endl;
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
