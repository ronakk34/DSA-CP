// B. Yuu Koito and Minimum Absolute Sum-->>


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
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    if(arr[0]==-1 && arr[n-1]!=-1){
        arr[0]=arr[n-1];
        for(int i = 1;i<n;i++){
            if(arr[i]==-1){
                arr[i]=0;
            }
        }
        ll ans = 0;
        for(int i = n-2;i>=0;i--){
            ans+=arr[i+1]-arr[i];
        }
        cout << ans << endl;
        for(int x:arr){
            cout << x << " ";
        }
    }
    else if(arr[0]!=-1 && arr[n-1]==-1){
        for(int i = 0;i<n-1;i++){
            if(arr[i]==-1){
                arr[i]=0;

            }
        }
        arr[n-1] =arr[0];
        ll ans = 0;
        for(int i = n-2;i>=0;i--){
            ans+=arr[i+1]-arr[i];
        }
        cout << ans << endl;
        for(int x:arr){
            cout << x << " ";
        }

    }
    else{
        for(int i = 0;i<n;i++){
            if(arr[i]==-1){
                arr[i]=0;
            }
        }
        ll ans = 0;
        for(int i = n-2;i>=0;i--){
            ans+=arr[i+1]-arr[i];
        }
        cout << abs(ans) << endl;
        for(int x:arr){
            cout << x << " ";
        }

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