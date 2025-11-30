// D. Distinct Split-->>


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
    string s;
    cin >> s;
    map<char,ll> mp1,mp2;
    for(auto x:s){
        mp1[x]++;
    }
    ll ans = 0;
    for(auto x:s){
        mp2[x]++;
        mp1[x]--;
        if(mp1[x]==0){
            mp1.erase(x);
        }
        ll total_unique = mp1.size()+mp2.size();
        ans = max(ans,total_unique);
    }
    cout << ans << endl;
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