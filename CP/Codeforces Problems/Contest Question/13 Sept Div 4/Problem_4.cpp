// D. Destruction of the Dandelion Fields--->>

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
    // int last_visit;
    ll n;
    cin >> n;
    ll oddes = 0;
    ll even_sum = 0;
    ll odd_sum = 0;
    vector<ll> arr(n);
    vector<ll> odd;
    // vector<ll> even;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==1){
            oddes++;
            odd.push_back(arr[i]);
        }
        else{
            even_sum+=arr[i];
        }
    }
    // sort(odd.)
    if(oddes==0){
        cout << "0" << endl;
    }
    else{
        // if(oddes%2==1){
        //      last_visit = oddes/2+1;
        // }
        // else{
        //      last_visit = oddes/2;
        // }
        sort(odd.begin(),odd.end());
        ll m = odd.size();
        for(int i = m/2;i<m;i++){
            odd_sum+=odd[i];
        }
        cout << odd_sum+even_sum << endl;
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
