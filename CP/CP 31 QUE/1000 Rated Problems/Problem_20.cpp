// B. MEXor Mixup-->>

#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll xor_a = 0;
        if((a-1)%4==0){
            xor_a = a-1;
        }
        else if((a-1)%4==1){
            xor_a = 1;
        }
        else if((a-1)%4==2){
            xor_a = a;
        }
        else if((a-1)%4==3){
            xor_a = 0;
        }
        else{
            xor_a = 0;
        }
        if(xor_a==b){
            cout << a << endl;
        }
        else if((xor_a^b)!=a){
            cout << a+1 << endl;
        }
        else{
            cout << a+2 << endl;
        }
    }
}

