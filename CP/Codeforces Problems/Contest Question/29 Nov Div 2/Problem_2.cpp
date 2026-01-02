
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
    ll x;
    map<ll,ll> freq;
    ll ans = 0;
    ll odd = 0;
    ll even = 0;
    for(int i = 0;i<2*n;i++){
        cin >> x;
        freq[x]++;
    }
    for(auto &p:freq){
        if((p.second)%2==1){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd>0){
        ans = odd+2*even;
        cout << ans << endl;
        return;
    }
    ll even_freq = 0;
    ll odd_freq = 0;
    if(odd == 0){
        for(auto &p:freq){
            if((p.second/2)%2==0){
                even_freq++;
            }
            else{
                odd_freq++;
            }
        }
        ans = 2*(even_freq+odd_freq);
        if(even_freq%2==0){
            cout << ans << endl;
        }
        else{
            cout << ans-2 << endl;
        }

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