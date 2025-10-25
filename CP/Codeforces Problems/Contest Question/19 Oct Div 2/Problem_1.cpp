// A. Notelock-->>

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
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll last = -100000;
    ll ans = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='1'){
            if(i-last>=k){
                ans++;
            }
            
            last = i;
        }
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
