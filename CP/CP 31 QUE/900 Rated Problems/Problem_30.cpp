// A. Three Indices-->>

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
    vector<ll> p(n);
    bool found = false;
    ll ans = 1;
    for(int i = 0;i<n;i++){
        cin >> p[i];
    }
    for(int i = 0;i<n-2;i++){
        if(p[i]<p[i+1] && p[i+1]> p[i+2]){
            found = true;
            ans+=i;
            break;
        }
    }
    if(found){
        cout << "Yes" << endl;
        cout << ans << " " <<  ans+1 << " " << ans+2 << endl;
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