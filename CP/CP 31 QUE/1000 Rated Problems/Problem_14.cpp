// B. Shoe Shuffling-->>

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
    vector<ll> arr(n+1);
    map<ll,ll> freq;
    ll min_freq = INT_MAX;
    for(int i = 1;i<=n;i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for(auto it :freq){
        if(it.second<min_freq){
            min_freq = it.second;
        }
    }
    if(min_freq==1){
        cout << "-1" << endl;
    }
    else{
        ll i = 1;
        vector<ll> ans;
        while(i<=n){
            ll j = i;
            while(j<n && arr[j+1]==arr[i]){
                j++;
            }
            for(int k = i;k<j;k++){
                ans.push_back(k+1);
            }
            ans.push_back(i);
            i = j+1;
        }
        for(ll x:ans){
            cout << x << " ";
        }
        cout << endl;
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