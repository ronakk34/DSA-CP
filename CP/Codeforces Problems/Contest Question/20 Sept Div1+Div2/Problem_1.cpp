// A. Shortest Increasing Path--->>>

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
    ll x,y;
    cin >> x >> y;
    if(x==y){
        cout << "-1" << endl;
    }
    else if(x<y){
        cout << "2" << endl;
    }
    // else if(x>y && x%2==0 && y%2==0){
    //     cout << "3" << endl;
    // }
    // else if(x>y && x%2==1 && y%2==1 && x!=1 && y>1){
    //     cout << "3" << endl;
    // }
    else if(x>y && x-y!=1 && x>1 && y>1){
        cout << "3" << endl;
    }
    else{
        cout << "-1" << endl;
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
