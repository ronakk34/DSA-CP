// A. AB Balance-->

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
    ll a,b,c;
    cin >> a >> b >> c;
    bool ans = false;

    ll new_a = 2*b-c;
    if(new_a/a>0 && new_a%a==0){
        ans = true;
    }
    ll new_b = (a+c)/2;
    if(new_b%b==0 && new_b/b>0 && (c-a)%2==0){
        ans = true;
    }
    ll new_c = 2*b-a;
    if(new_c/c>0 && new_c%c ==0){
        ans = true;
    }

    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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
