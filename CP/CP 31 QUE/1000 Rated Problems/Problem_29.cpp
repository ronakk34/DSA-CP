// A. Johnny and Ancient Computer-->>

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll div = (a>=b?a/b:b/a);
        if ((a >= b ? a % b : b % a) != 0) {
            cout << -1 << endl;
            continue;
        }
        if ((div & (div - 1)) != 0) {
            cout << -1 << endl;
            continue;
        }
        ll ans = 0;
        while(div!=1){
            if(div%8==0){
                div/=8;
                ans++;
            }
            else if(div%4==0){
                div/=4;
                ans++;
            }
            else if(div%2==0){
                div/=2;
                ans++;
            }
        }
        cout << ans << endl;
    }
}