// Weird Algorithm-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    using ll = long long;
    vector<ll> arr;
    ll n;
    cin >> n;
    arr.push_back(n);
    while(n>1){
        if(n%2==0){
            n=n/2;
            arr.push_back(n);
        }
        else{
            n=n*3+1;
            arr.push_back(n);
        }
    }
    for(auto x: arr)
    cout << x << " ";
    cout << endl;
}