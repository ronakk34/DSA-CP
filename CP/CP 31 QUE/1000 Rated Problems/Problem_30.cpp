// B. Bogosort-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.rbegin(),arr.r  end());
        vector<int> ans;
        for(int i = 0;i<n;i++){
            ans.push_back(arr[i]);
        }
        for(int x:ans){
            cout << x << " ";
        }
        cout << endl;
    }
}