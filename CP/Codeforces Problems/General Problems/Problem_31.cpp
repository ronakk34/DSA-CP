// A. Jagged Swaps-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        // int min_value = 0;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            // min_value = min(min,arr[i]);
        }
        if(arr[0]==1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

    }
}