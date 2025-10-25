// B. Chemistry-->>

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
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt = 0;
    map<char,ll> freq;
    for(char c:s){
        freq[c]++;
    }
    for(auto p:freq){
        if(p.second%2==1){
            cnt++;
        }
    }
    if((n-k)==1){
        cout << "Yes" << endl;
    }
    else if(cnt>k+1){
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
