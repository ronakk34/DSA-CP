// C. Vasilije in Cacak-->>

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
   ll n,k,x;
   cin >> n >> k >> x;
   if(2*x>=k*(k+1) && 2*x<=n*(n+1)-(n-k)*(n-k+1)){
    cout << "Yes" << endl;
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
