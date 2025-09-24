// A. Line Trip-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int max = arr[0];
        int mex = 2*(x-arr[n-1]);
        for(int i = 0;i<n-1;i++){
            int diff = arr[i+1]-arr[i];
            if(diff>max){
                max = diff;
            }
        }

       if(mex>max){
        cout << mex << endl;
       }
       else{
        cout << max << endl;
       }

    }
}