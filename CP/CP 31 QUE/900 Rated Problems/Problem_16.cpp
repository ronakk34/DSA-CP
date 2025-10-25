// D. Deletive Editing-->>

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
    string s,n;
    cin >> s >> n;
    map<ll,ll> freq;
    for(int i = 0;i<n.size();i++){
        freq[n[i]]++;
    }
    for(int i = s.size()-1;i>=0;i--){
        if(freq[s[i]]>0){
            freq[s[i]]--;
        }
        else{
            s[i]= '.';
        }
    }
    string final_string = "";
    for(int i = 0;i<s.size();i++){
        if(s[i]!='.'){
            final_string+=s[i];
        }
    }
    if(final_string==n){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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
