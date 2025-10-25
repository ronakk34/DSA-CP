// A. Jellyfish and Undertale-->>

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
    ll a,b,n;
    cin >> a >> b >> n;
    vector<ll> arr(n);
    int min_sum = 0;
    int max_val = 0;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]+1<a){
            min_sum+=arr[i];
        }
        else{
            max_val++;
        }
    }
    int ans = (b+min_sum)+(max_val*(a-1));
    cout << ans << endl;
    // if(b>=a){
    //     cout << (min_sum+a+max_val*(a-1));
    // }
    // else{
    //     cout << (min_sum+b+max_val*a)-1;
    // }
    // cout << endl;

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
