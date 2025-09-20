// B. Left and Down

#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
// #define int long long
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b,k;
        cin >> a >> b >>k;
        ll x = __gcd(a,b);
        if((k>a && k>b) || (a/x<=k && b/x<=k) ){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        
    }
    
    return 0;
}