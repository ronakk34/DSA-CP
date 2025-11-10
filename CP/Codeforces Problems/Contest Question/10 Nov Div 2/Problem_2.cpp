// B. Siga ta Kymata-->>


// RON IS HERE..

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
    ll ones = 0;
    ll zeroes = 0;
    ll max = INT_MIN;
    ll min = INT_MAX;
    string s;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>max){{
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    string x;
    cin >> x;
    for(int i = 0;i<n;i++){
        if(x=='1'){
            ones++;
        }
        else{
            zeroes++;
        }
    }
    if(ones == n || s[0]=='1' || s[n-1]=='1'){
        cout << "-1" << endl;
    }
    else{
        ll min_val = INT_MAX;
        ll max_val = INT_MIN;
        for(int i = 0;i<n;i++){
            if(x[i]=='1'){
                if(arr[i]==max || arr[i]==min){
                    found = true;
                    break;
                }
                else{
                    min_val = min(min_val,arr[i]);
                    min_val_inde
                    max_val = max(max_val,arr[i]);
                }
            }
        }
        for()
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