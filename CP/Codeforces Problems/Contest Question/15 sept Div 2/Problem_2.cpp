// B. Maximum Cost Permutation--->>

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll cost(const vector<ll> &p, ll n){
    ll first = -1;
    ll last = -1;
    for(int i = 0;i<n;i++){
        if(p[i]!=i+1){
            if(first==-1){
                first = i;
                last = i;
            }
            else{
                last = i;
            }
        }
    }
    if(first==-1){
        return 0;
    }
    else{
        return last-first+1;
    }
}

int main(){
    ll t;
    cin >> t;
    // cin >> n;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> p(n);
        map<ll,ll> freq;
        for(int i = 0;i<n;i++){
            cin >> p[i];
            freq[p[i]]++;
        }
        int j = n;
        for(int i = 0;i<n;i++){
            if(p[i]==0){
                while(freq[j]>0){
                    j--;
                }
                p[i]=j;
                freq[j]=1;
            }
        }
        int ans = cost(p,n);
        cout << ans << endl;
    }
}