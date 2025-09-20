// 2114A - Square Year-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sqr = ceil(sqrt(n));
        if(sqr*sqr==n){
            cout << "0" << " " << sqr << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}