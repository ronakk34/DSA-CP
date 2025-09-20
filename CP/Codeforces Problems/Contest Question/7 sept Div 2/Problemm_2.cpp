#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        ll max_cake = 0;
        for(int i = 0;i<n;i++){
            max_cake+= 1LL*arr[i]*max(0LL,m-i);
        }
        cout << max_cake << endl;
    }

}