// M. Minimum LCM-->>


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
    ll a = 1;
    if(n%2==0){
        cout << n/2 << " " << n/2 << endl;
        return;
    }
    else{
        for(int i = 2;i*i<=n;++i){
           if(n%i==0){
            a =n/i;
            break;
           }
        }
    }
    cout << a << " " << (n-a) << endl;
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
