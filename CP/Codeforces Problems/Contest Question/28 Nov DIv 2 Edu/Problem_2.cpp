// B. Addition on a Segment-->>


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
   ll non_zeroes = 0;
   ll max_val = INT_MIN;
   ll total_sum = 0;
   vector<ll> arr(n);
   for(int i = 0;i<n;i++){
    cin >> arr[i];
    if(arr[i]!=0){
      non_zeroes++; 
      total_sum+=arr[i];
    }
    if(arr[i]>max_val){
        max_val = arr[i];
    }
   }
   if(total_sum==n){
    cout << "1" << endl;
   }
   else if(total_sum>n){
    ll x = total_sum-n;
    if(x>=non_zeroes){
        cout << non_zeroes << endl;
    }
    if(x<non_zeroes){
        cout << x+1 << endl;
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



