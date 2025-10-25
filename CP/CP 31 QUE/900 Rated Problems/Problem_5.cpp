// A. Make It Zero-->>

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
    if(n%2==0){
        cout << "2" << endl;
        cout << "1" << " " << n << endl;
        cout << "1" << " " << n << endl;
    }
    else{
        cout << "4" << endl;
        cout << "1" << " " << n-1 << endl;
        cout << "1" << " " << n-1 << endl;
        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
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
