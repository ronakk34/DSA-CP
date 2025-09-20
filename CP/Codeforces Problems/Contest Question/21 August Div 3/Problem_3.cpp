// C1. The Cunning Seller (easy version)-->

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cal(ll x){
    ll val = pow(3,x+1)+x*pow(3,x-1);
    return val;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        ll x;
        ll cost = 0;
        cin >> n;
        while(n>0){
            x = log(n)/log(3);
            if(pow(3,x+1)==n){
                x=x+1;
        }
        cost = cost + cal(x);
        x = pow(3,x);
        n = n-x;
        
    }
    cout << cost << endl;
}
}
