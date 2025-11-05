// B. Luntik and Subsequences-->>

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
    ll count = 0;
    ll zeroes = 0;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==1 ){
            count++;
        }
        else if(arr[i]==0){
            zeroes++;
        }
    }
    cout << (1LL << zeroes)*(count) << endl;

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