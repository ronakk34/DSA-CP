// A. Maple and Multiplication-->>

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
    int a,b,ans;
    cin >> a >> b;
    if(a==b){
        cout << "0" << "\n";
    }
    else if(a%b==0 || b%a==0){
        cout << "1" << "\n";
    }
    else{
        cout << "2" <<"\n";
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
