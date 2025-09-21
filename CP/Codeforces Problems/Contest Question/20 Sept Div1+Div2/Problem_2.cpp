// B. Multiple Construction--->>>


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        //string builder for fast output
        ostringstream out;

        for (int i = n; i >= 1; i--) out << i << " ";
        out << n;
        for (int i = 1; i < n; i++) out << " " << i;
        out << "\n";

        cout << out.str();
    }
}



// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main(){
//     ll t;
//     cin >> t;
// //     signed main() {
//   ios::sync_with_stdio(false); cin.tie(nullptr);
//     while(t--){
//         ll n;
//         cin >> n;
//         for(int i = n;i>=1;i++){
//             cout << i << " ";
//         }
//         cout << n;
//         for(int i = 1;i<n;i++){
//             cout << " " << i;
//         }
//         cout << "\n";
//     }

// }


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
//     vector<ll> arr(2*n,0);
//     for(int x=n;i)

//     for(int i = 0;i<2*n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     // if(n==1){
//     //     cout << "1" << " " << "1" endl; 
//     // }
//     // else if(n==2){
//     //     cout << "1" << " " << "2" << " " << "1" << " " << "2" << endl;
//     // }
//     // else if(n==3){
//     //     cout << "1" << " " << "3" << " " << "1" << " " << "2" << " " << "3" << " " << "2" << endl;
//     // }
//     // else if(n%2==0){
//     //     for(int i = 1;i<=2*n;i++){
//     //         // int count = 2;
//     //         int pos = i+1+i;
//     //         v.push_back(i+1);
//     //         v.insert(v.begin()+i,i+1)
//     //         // count++;
//     //     }
//     }


// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;   // if multiple test cases
//     while(t--) {
//         solve();
//     }
// }
