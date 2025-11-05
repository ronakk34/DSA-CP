// C. Isamatdin and His Magic Wand!-->>

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
    ll odds = 0;
    ll evens = 0;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==1){
            odds++;
        }
        else{
            evens++;
        }
    }
    if(odds!=0 && evens!=0){
        sort(arr.begin(),arr.end());
        for(int x:arr){
            cout << x << " ";
        }
        cout << endl;
    }
    else{

        for(int x:arr){
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