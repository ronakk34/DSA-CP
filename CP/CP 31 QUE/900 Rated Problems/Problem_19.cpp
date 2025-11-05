// B. Odd Grasshopper-->>

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
    ll x,n;
    cin >> x >> n;
    ll final_pos;
    if(n%4==1){
        final_pos = -n;
    }
    else if(n%4==2){
        final_pos = 1;
    }
    else if(n%4==3){
        final_pos = n+1;
    }
    else{
        final_pos =0;
    }

    if(x%2==0){
        final_pos= x+final_pos;
    }
    else{
        final_pos= x-final_pos;
    }

    cout << final_pos << endl;
    
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