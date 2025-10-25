// D. Balanced Round-->>

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
   ll count = 1;
   ll n,k;
   ll max_count = 1;
   cin >> n >> k;
   vector<ll> arr(n);
   for(int i = 0;i<n;i++){
    cin >> arr[i];
   }
   sort(arr.begin(),arr.end());
   for(int i = 0;i<n-1;i++){
    if(arr[i+1]-arr[i]<=k){
        count++;
        max_count = max(count,max_count);
        
    }
    else{
        count = 1;
    }
   }
   cout << n-max_count << endl;
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
