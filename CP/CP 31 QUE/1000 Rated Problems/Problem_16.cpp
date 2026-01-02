// A. Red Versus Blue-->>

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
    ll n,r,b;
    cin >> n >> r >> b;
    string s;
    while(b!=0){
        ll max_r = ceil((double)r / (b + 1));
        for(int i = 0;i<max_r;i++){
            s.push_back('R');
        }
        s.push_back('B');
        b--;
        r-=max_r;
    }
    while(r!=0){
        s.push_back('R');
        r--;
    }
    cout << s << endl;
//     ll max_r = ceil((double)r / (b + 1));
//     ll max_b = r/max_r;
//     ll rem = r%max_r;
//     if(rem==0){
//         while(max_b!=0){
//             for(int i = 0;i<max_r;i++){
//                 s.push_back('R');
//             }
//             max_b--;
//             if(max_b!=0){
//                 s.push_back('B');
//             }
//         }
//     }
//     else{
//         while(max_b!=0){
//         for(int i = 0;i<max_r;i++){
//             s.push_back('R');
//         }
//         s.push_back('B');
//         max_b--;
//     }
//     for(int i = 0;i<rem;i++){
//         s.push_back('R');
//     }
//     }
//     cout << s << endl;
// 
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

