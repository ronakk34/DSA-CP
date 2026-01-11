// C. Move Brackets

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
    string s;
    cin >> s;
    ll ans = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='('){
            ans++;
            for(int j = i+1;j<n;j++){
                if(s[j]==')' && ans>0){
                    ans--;
                }
                else{
                    break;
                }
            }
        }
    }
    cout << ans << endl;
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

