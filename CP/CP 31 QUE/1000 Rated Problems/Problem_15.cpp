#include<bits/stdc++.h>
using namespace std;

// Use sliding window in the question..-->>

using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll ans = 0;
        // ll cost = INT_MAX;
        for(int i = 0;i<k;i++){
            if(s[i]=='W'){
                ans++;
            }
        }
        ll cost = ans;
        for(int i = k;i<n;i++){
            if(s[i]=='W'){
                ans++;
            }
            if(s[i-k]=='W'){
                ans--;
            }
            cost = min(cost,ans);
        }
        cout << cost << endl;
    }
}