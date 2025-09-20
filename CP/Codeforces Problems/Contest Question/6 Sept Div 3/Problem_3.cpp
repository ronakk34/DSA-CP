// C. Maximum Even Sum-->>

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if(a%2==1 && b%2==1){
            a=a*b;
            b=b/b;
            cout << a+b << endl;
            // int sum = a+b;
        }
        else if(a%2==0 && b%2==0){
            ll half_b = b/2;
            b=b/half_b;
            a=a*half_b;
            cout << a+b << endl;
            // int sum = a+b;
        }
        else if(a%2==0 && b%2==1){
            cout << "-1" << endl;
        }
        else if(a%2==1 && b%2==0){
            ll half_b = b/2;
            b=b/half_b;
            a=a*half_b;
            if((a%2==0 && b%2==0) || (a%2==1 && b%2==1)){
                cout << a+b << endl;
            }
            else{
                cout << "-1" << endl;
            }
        }
    }
}