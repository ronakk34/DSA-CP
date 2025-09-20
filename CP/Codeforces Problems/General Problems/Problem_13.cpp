// A. Submission is All You Need

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    // #define ll long long;
    ll t;
    cin >> t;
    while(t--){
        ll n,i,j,z,o,ans;
        cin >> n;
        ans=z=o=0;
        ll arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0){
                z++;
            }else if(arr[i]==1){

                o++;
            }
            ans=ans+arr[i];
            
        }

        ans = ans+min(z,o)*2-min(z,o);

        if(z>o){
            ans = ans+z-o;
        }
        cout << ans << endl;

    }
}
