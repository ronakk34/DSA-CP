// C1. Renako Amaori and XOR Game (easy version)-->>


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
    vector<ll> arra(n+1);
    vector<ll> arrb(n+1);
    ll ansa = 0;
    ll ansb = 0;
    for(int i = 1;i<=n;i++){
        cin >> arra[i];
        ansa^=arra[i];
    }
    for(int i = 1;i<=n;i++){
        cin >> arrb[i];
        ansb^=arrb[i];
    }
    if(ansa==ansb){
        cout << "Tie" << endl;
        return;
    }
    ll a = 0;
    ll b = 0;
    for(int i = 1;i<=n;i++){
        if(arra[i]!=arrb[i]){
            if(i%2==1){
               if(arrb>arra) {
                swap(arra,arrb);
               }
            }
            else{
                if(arra>arrb){
                    swap(arra,arrb);
                }
            }
        }
    }
    if(arra>arrb){
        cout << "Ajisai" << endl;
    }
    else{
        cout << "Mai" << endl;
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