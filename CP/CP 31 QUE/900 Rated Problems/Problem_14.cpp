// A. AvtoBus-->>

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
    if(n==4 && n%6!=0){
        cout << n/4 << " " << n/4 << endl;

    }
    else if(n==6 && n%4!=0){
      cout << n/6 << " " << n/6 <<  endl;
    }
    else if(n%6==0 && (n%6)%4==0){
        cout << n/6 << " " << n/4 << endl;
    }
    else{
        cout << "-1" << endl;
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
