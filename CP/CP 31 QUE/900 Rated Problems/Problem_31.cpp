// B. 01 Game-->>

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// #define pb push_back
// #define all(v) v.begin(), v.end()
// #define sz(v) (int)v.size()
// #define endl "\n"

// const ll INF = 1e18;
// const ll MOD = 1e9 + 7;

// void RON() {
//     string s;
//     cin >> s;
//     ll n = s.size();
//     if((n/2)%2==1){
//         cout << "DA" << endl;
//     }
//     else{
//         cout << "NET" << endl;
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;   
//     while(t--) {
//         RON();
//     }
// }


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
   string s;
   cin >> s;
   ll ones = 0;
   ll zeroes = 0;
   for(int i = 0;i<s.size();i++) {
    if(s[i]=='0'){
        zeroes++;
    }
    else{
        ones++;
    }
   }
   ll ans = min(ones,zeroes);
   if(ans%2==1){
    cout << "DA" << endl;
   }
   else{
    cout << "NET" << endl;
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