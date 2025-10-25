// B. Permutation Swap-->>

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
   for(int i = 0;i<n;i++){
    cin >> p[i];
   }
   ll k = abs(p[0]-1);
   for(int i = 1;i<n;i++){
    k = __gcd(k,abs(p[i]-(i+1)));
   }
   cout << k << endl;

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
