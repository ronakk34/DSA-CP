// A. Array Coloring-->>

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
        int sum = 0;
        for(int i = 0;i<n-1;i++){
            sum+=arr[i+1];
        }
        if(arr[0]%2==0 && sum%2==0){
            cout << "Yes" << endl;
        }
        else if(arr[0]%2==1 && sum%2==1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}