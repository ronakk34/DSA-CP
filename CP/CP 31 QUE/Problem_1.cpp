// A. Halloumi Boxes-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        bool found = false;
        int n,k;
        cin >> n >> k;
        vector<int> arr(n+1);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                found = true;
                break;   
            }
        }
        if(found){
            if(k>1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    }
}