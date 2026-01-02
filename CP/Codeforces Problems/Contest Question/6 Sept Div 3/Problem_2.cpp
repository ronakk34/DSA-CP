// // B. Fun Permutation-->>


// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// #define pb push_back
// #define all(v) v.begin(), v.end()
// #define sz(v) (int)v.size()
// #define endl "\n"

// const ll INF = 1e18;
// const ll MOD = 1e9 + 7;

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> p(n);
//     vector<ll> q(n);
//     for(int i = 0;i<n;i++){
//         cin >> p[i];
//         q[i] = n+1-p[i];
//         cout << q[i] << " ";
//     }
//     cout << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;   // if multiple test cases
//     while(t--) {
//         solve();
//     }
// }


// // #include<bits/stdc++.h>
// // using namespace std;
// // using ll = long long;

// // int main(){
// //     ll t;
// //     cin >> t;
// //     while(t--){
// //         ll n;
// //         cin >> n;
// //         vector<ll> p(n);
// //         vector<ll> q(n);
// //         for(ll i = 0;i<n;i++){
// //             cin >> p[i];
// //             q[i]=n-p[i]+1;
// //             // for(int j = 0;j<n;j++){
// //             //     if(p[i]+j+1==n+1){
// //             //         q[i]=j+1;
// //             //     }
// //             cout << q[i] << " ";
// //             }
            
// //         }
// //         // for(int x:q){
// //         //     cout << x << " ";
// //         // }
// //         // for(int i = 0;i<n;i++){
// //         //     for(int j = 0;j<n;j++){
// //         //         if(p[i]+(j+1)==n+1){
// //         //             q[i]=j+1;
// //         //             // q.insert(i,j+1);
// //         //         }
// //         //     }
// //         // }
// //         // sort(p.begin(),p.end());
// //         // for(ll i = 0;i<n;i++){
// //         //     cout << n-i << " ";
// //         // }
// //         // cout << endl;
// //     }
// // }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        // for(int j = 1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}