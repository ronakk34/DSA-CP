// A. Twin Permutations-->>

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> ans;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            for(int j = 0;j<n;j++){
                if(arr[i]+j+1==n+1){
                    ans.push_back(j+1);
                }
            }
        }
        for(int x:ans){
            cout << x << " ";
        }
        cout << endl;
        
        

    }
}