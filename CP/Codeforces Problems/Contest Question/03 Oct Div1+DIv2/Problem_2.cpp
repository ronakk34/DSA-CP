// B. Catching the Krug-->>>

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
    ll n,rk,ck,rd,cd;
    cin >> n >> rk >> ck >> rd >> cd;
    if((rk==rd && abs(ck-cd)==1)){
        cout << n-rk << endl;
    }
    else if(ck==cd && abs(rk-rd)==1){
        cout << n-rd << endl;
    }
    else{
        
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
