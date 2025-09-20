// A. How Much Does Daytona Cost?-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        bool found = false;
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        for(int i = 0;i<n;i++){
            if(arr[i]==k){
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