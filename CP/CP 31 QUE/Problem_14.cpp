#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl "\n"

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void solve() {
    ll n;
    cin >> n;
    ll twoes = 0;
    ll zeroes = 0;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==2){
            twoes++;
        }
        else{
            zeroes++;
        }
    }
    if(twoes==0){
        cout << "1" << endl;
    }
    else if(twoes%2==1){
        cout << "-1" << endl;
    }
    else{
        int count = 0;
        int length = 0;
        int stop_cond = twoes/2;
        for(int i = 0;i<n;i++){
            if(arr[i]==2){
               count++;
               if(count==stop_cond) {
                length = i;
                break;
               }
            }
            // cout << i << endl;
        }
        cout << length+1 << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   // if multiple test cases
    while(t--) {
        solve();
    }
}
