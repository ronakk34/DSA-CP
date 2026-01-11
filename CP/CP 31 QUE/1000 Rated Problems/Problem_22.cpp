#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >>b;
        ll ans = INT_MAX;
        for(int i = 0;i<=31;i++){
           ll op = i;
           ll x = b+i;
           ll y = a;
           if(x==1){
            continue;
           }
            while(y>0){
               y/=x;
               op++; 
            }
            ans = min(ans,op);
        }
        cout << ans << endl;
    }
}