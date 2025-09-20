// A. Desorting-->>

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
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }
        int min_diff = arr[1]-arr[0];
        // sort(arr.begin(),arr.end());
        // int minn = arr[1]-arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                found = true;
                break;
            }
        }
        for(int i =0;i<n-1;i++){
            int diff = arr[i+1]-arr[i];
             min_diff = min(min_diff,diff);
        }
        int result = (min_diff/2)+1;
        if(found){
            cout << "0" << endl;
        }
        else{

            cout << result << endl;
        }
        
    }
    
}