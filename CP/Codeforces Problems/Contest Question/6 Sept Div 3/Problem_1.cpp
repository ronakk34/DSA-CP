// A. Collatz Conjecture-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k,x;
        cin >> k >> x;
        while(k--){
            x=x*2;
        }
        cout << x << endl;
    }
}