// B. Roof Construction-->>

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll m = n-1;
        ll c = 0;
        while(m>0){
            c++;
            m/=2;
        }
        ll j = 1;
        c--;
        j = pow(2,c);
        // while(c>0){
        //     j = j*2;
        //     c--;
        // }
        for(int i = n-1;i>=j;i--){
            cout << i << " ";
        }
        for(int i = 0;i<j;i++){
            cout << i << " ";
        }
        cout << endl;
    }
}