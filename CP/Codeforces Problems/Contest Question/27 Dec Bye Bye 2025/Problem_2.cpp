// B. Impost or Sus-->>



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
    string r;
    cin >> r;
    ll cost = 0;
    ll n =r.size();
    if(r[0]=='u'){
        r[0]='s';
        cost++;
    }
    if(r[n-1]=='u'){
        r[n-1] = 's';
        cost++;
    }
    for(int i = 1;i<n-1;i++){
        if(r[i]=='u' && r[i+1]=='u'){
            r[i+1]='s';
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