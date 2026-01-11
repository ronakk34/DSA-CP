// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         s=" "+s;
//         int maxi = s[1]-'a';
//         int left = 1;
//         int right = 2;
//         bool found = false;
//         for(int i = 2;i<=n;i++){
//             if(maxi>s[i]-'a'){
//                 right = i;
//                 found = true;
//                 break;
//             }
//             else{
//                 maxi = s[i]-'a';
//                 left = i;
//             }
//         }
//         if(found){
//             cout << "Yes" << endl;
//             cout << left << " " << right << endl;
//         }
//         else{
//             cout << "No" << endl;
//         }
    
// }


#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
        ll n,q;
        cin >> n >> q;
        vector<ll> arr(n+1);
        for(int i = 1;i<=n;i++){
            cin >> arr[i];
        }
        sort(arr.begin()+1,arr.begin()+n+1,greater<ll>());
        vector<ll> diff(n+2,0);
        while(q--){
            ll l,r;
            cin >> l >> r;
            diff[l]+= 1;
            diff[r+1]+=-1;
        }
        for(int i = 2;i<=n;i++){
            diff[i]+=diff[i-1];
        }
        sort(diff.begin()+1,diff.begin()+n+1,greater<ll>());
        ll ans =0;
        for(int i = 1;i<=n;i++){
            ans+=arr[i]*diff[i];
        }
        cout << ans << endl;
}


