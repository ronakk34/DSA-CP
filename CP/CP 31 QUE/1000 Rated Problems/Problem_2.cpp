// C. Raspberries-->>

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
    ll n,k;
    cin >> n >> k;
    ll ans = INT_MAX;
    ll ans1;
    ll evens = 0;
    bool found = false;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            evens++;
        }
        if(arr[i]%k==0){
            found = true;
        }
        if(k>arr[i]){
            ans1 = k-arr[i];
        }
        if(k<arr[i]){
            ans1 = k-(arr[i]%k);
        }
        ans = min(ans,ans1);
    }
    if(found){
        cout << "0" << endl;
    }
    else{
        if(k==4){
          if(evens==1)  {
            cout << "1" << endl;
          }
          else if(evens==0){
            ll anss = min(1LL*2,ans);
            cout << anss << endl;
          }
          else{
            cout << "0" << endl;
          }
        }
        else{
            cout << ans << endl;    
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