// B. Villagers

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll cost = 0;
        ll n;
        cin >> n;
        vector<ll> g(n+1);
        for(int i = 1;i<=n;i++){
            cin >> g[i];
        }
        sort(g.begin()+1,g.end());
        for(int i = n;i>=1;i=i-2){
                cost+=g[i];
            }
            cout << cost << endl;
        }
        
    }
