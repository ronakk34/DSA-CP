// A. Coins-->>

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(n%2==0 || (n-k)%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}