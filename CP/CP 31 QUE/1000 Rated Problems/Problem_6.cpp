// C. Ski Resort-->>


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
    ll n,k,q;
    cin >> n >> k >> q;
    vector<ll> arr(n);
    ll max = 0;
    ll ans  =0;
    ll count = 0;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>q){
            max++;
        }
    }
    if(max==n || n-max < k){
        cout << "0" << endl;
    }
    else{
        for(int i = 0;i<n;i++){
            if(arr[i]<=q){
                count++;
            }
            else{
                if(count>=k){
                   ans+=(count-k+1)*(count-k+2)/2;
                }
                count = 0;
            }
        }

        if(count>=k){
            ans+=(count-k+1)*(count-k+2)/2;
        }
        cout << ans << endl;
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