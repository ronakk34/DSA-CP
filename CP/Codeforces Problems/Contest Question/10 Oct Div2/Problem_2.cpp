// B. Bitwise Reversion-->>

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
    ll x,y,z;
    cin >> x >> y >> z;
    if((x & y) == (x & z) && (x & z) == (y & z)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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
