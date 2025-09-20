// B. Lasers-->>


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
    ll n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<int> arrY(n);
    vector<int> arrX(m);
    for(int i = 0;i<n;i++){
        cin >> arrY[i];
    }
    for(int i = 0;i<m;i++){
        cin >> arrX[i];
    }
    cout << n+m << endl;

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

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main(){
//     ios::sync_with_stdio(false); // fast I/O
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         ll n,m,x,y;
//         cin >> n >> m >> x >> y;
//         vector<ll> arrY(n),arrX(m);
//         // vector<ll> arrX(m);
//         for(int i = 0;i<n;i++){
//             cin >> arrY[i];
//         }
//         for(int i = 0;i<m;i++){
//             cin >> arrX[i];
//         }
//         cout << n+m << endl;
//     }
// }