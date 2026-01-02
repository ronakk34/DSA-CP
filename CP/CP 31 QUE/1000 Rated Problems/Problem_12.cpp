// B. Beautiful Array-->>


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
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
    ll sum = b*k;
    vector<ll> arr(n,0);
    
    if(s>k*b+(k-1)*n || s/k<b){
        cout << "-1" << endl;
    }
    else{
       arr[0]=k*b;
       for(int i = 0;i<n;i++){
        ll ans = min(s-sum,k-1);
        arr[i]+=ans;
        sum+=ans;
       }
       for(ll x:arr){
           cout << x << " ";
       }
       cout << endl;
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