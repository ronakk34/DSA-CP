// A. Cut the Array-->>

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
    ll sum = 0;
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        // sum_l_to_r = arr[]
    }
    for(int i = 1;i<n-1;i++){
        sum+=arr[i];
    }
    int s1 = arr[0]%3;
    int s2 = sum%3;
    int s3 = arr[n-1]%3;
    if((s1==s2 && s2==s3 && s1==s3) || (s1!=s2 && s2!=s3 && s1!=s3) ){
        cout << "1" << " " << n-1 << endl;
    }
    else{
        cout << "0" << " " << "0" << endl;
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
