// B. Multiply by 2, divide by 6-->>

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
    // bool found = false;
    ll cnt2 = 0;
    ll cnt3 = 0;
    while(n>0 && n%3==0){
        n=n/3;
        cnt3++;
    }
    while(n>0 && n%2==0){
        n=n/2;
        cnt2++;
    }
    if(n>1 || cnt2 > cnt3){
        cout << "-1" << endl;
    }
    else{
        cout << cnt3-cnt2+cnt3 << endl;
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