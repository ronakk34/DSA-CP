// C. Traffic Light-->>


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
    char c;
    cin >> c;
    string s;
    cin >> s;
    s+=s;
    ll index = 0;
    ll ans = 0;
    for(int i = 2*n-1;i>=0;i--){
        if(s[i]=='g'){
            index = i;
        }
        else if(s[i]==c){
            ans = max(ans,index-i);
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