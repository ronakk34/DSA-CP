// B. Swap and Delete-->>

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
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt1 = 0;
    ll cnt0 = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='1'){
            cnt1++;
        }
        else{
            cnt0++;
        }
    }
    if(cnt1==0 && cnt0>0){
        cout << cnt0 << endl;
    }
    else if(cnt1>0 && cnt0==0){
        cout << cnt1 << endl;
    }
    else if(cnt1 == cnt0){
        cout << "0" << endl;
    }
    else{
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                if(cnt0==0){
                    break;
                }
                cnt0--;
            }
            else if(s[i]=='0'){
                if(cnt1==0){
                    break;
                }
                cnt1--;
            }
        }
        cout << cnt1+cnt0 << endl;
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