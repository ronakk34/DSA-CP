#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ll n,q;
    cin >> n >> q;
    vector<ll>arr(n),prefix(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    prefix[0]=arr[0];
    for(int i = 1;i<n;i++){
        prefix[i]+=arr[i]+prefix[i-1];
    }
    while(q--){
        ll a,b;
        cin >> a >> b;
        a--;
        b--;
        if(a==0){
            cout << prefix[b] << endl;
        }
        else{
            cout << prefix[b]-prefix[a-1] << endl;
        }
    }
}