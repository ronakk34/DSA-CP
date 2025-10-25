// B. Make It Increasing-->>

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
    ll cost = 0;
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    if(arr[n-1]<n-1){
        cout << "-1" << endl;
    }
    else{
        for(int i = n-1;i>=1;i--){
                while(arr[i]<=arr[i-1]){
                    arr[i-1]=arr[i-1]/2;
                    cost++;
                    if(arr[i-1]==0){
                        break;
                    }
                }
                if(arr[i]==0 && arr[i-1]==0){
                    cost = -1;
                    break;
                }
            
        }
        cout << cost << endl;
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
