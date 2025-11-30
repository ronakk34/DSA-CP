// A. Maximum Neighborhood-->>


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
   if(n==1){
    cout << n << endl;
   }
   else if(n==2){
    cout << "9" << endl;
   }
   else{
       ll first_ans = (n*n-1)*3+n*n-(n+1);
       ll second_ans = (n*n-(n+1))*5;
       if(first_ans>second_ans){
        cout << first_ans << endl;
       }
       else{
        cout << second_ans << endl;
       }
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