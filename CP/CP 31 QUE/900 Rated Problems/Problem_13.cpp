// B. NIT Destroys the Universe-->>

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl "\n"

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void RON() {
    ll n;
    cin >> n;
    ll others = 0;
    ll zeroes = 0;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==0){
            zeroes++;
        }
        else{
            others++;
        }
    }
    if(zeroes == 0){
        cout << "1" << endl;
    }
    else if(others == 0){
        cout << "0" << endl;
    }
    else{
        ll curr = 0;
        for(int i = 0;i<n;i++){
            if(arr[i]!=0){
                break;
            }
            else{
                curr++;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(arr[i]!=0){
                break;
            }
            else{
                curr++;
            }
        }
        if(curr==zeroes){
            cout << "1" << endl;
        }
        else{
            cout << "2" << endl;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   
    while(t--) {
        RON();
    }
}
