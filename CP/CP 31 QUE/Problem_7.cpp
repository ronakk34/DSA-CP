// A. Unit Array-->>

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll ans = 0;
        ll minus_ones = 0;
        ll ones = 0;
        ll n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==-1){
                minus_ones++;
            }
            else{
                ones++;
            }
        }
        while(minus_ones>ones || minus_ones%2==1){
            minus_ones--;
            ones++;
            ans++;
        }
        cout << ans << endl;
    }
}