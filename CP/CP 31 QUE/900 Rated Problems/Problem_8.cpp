// B. Comparison String-->>

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
    ll same = 1;
    ll max_same = 1;
    for(int i = 0;i<n;i++){
        if(s[i]==s[i-1]){
            same++;
            max_same = max(same,max_same);
        }
        else{
            same = 1;
        }
    }
    cout << max_same+1 << endl;
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
