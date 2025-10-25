// B. Not Dividing-->>

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
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n;i++){
       if(arr[i]==1){
        arr[i]++;
       }
    }
    for(int i =1 ;i<n;i++){
        if(arr[i]%arr[i-1]==0){
            arr[i]++;
        }
    }
    for(int x:arr){
        cout << x << " ";
    }
    cout << endl;
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
