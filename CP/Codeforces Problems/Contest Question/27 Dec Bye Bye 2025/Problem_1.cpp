// A. Yes or Yes

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
    ll y = 0;
    ll n = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='Y'){
            y++;
        }
        else{
            n++;
        }
    }
    if(y>1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
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