// B. Fair Numbers

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool isfair(ll n){
    ll num = n;
    while(num!=0){
        int x = num%10;
        if(x!=0 && n%x!=0){
            return false;
        }
        num/=10;
    }
    return true;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        while(!isfair(n)){
            n+=1;
        }
        cout << n << endl;
    }
}