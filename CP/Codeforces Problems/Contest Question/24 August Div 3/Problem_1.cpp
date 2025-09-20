// A. Redstone-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        bool found = false;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            
        }
        sort(arr.begin(),arr.end());
        for(int i =0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                found = true;
                break;
            }
        }
        if(found){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

    }
}