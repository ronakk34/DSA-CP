// B. Clock Work-->>

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
        for(int i = 0;i<n;i++){
            if(arr[i]<=max(2*(n-1-i),2*i)){
                found = true;
                break;
            }
           
        }
        if(found){
            cout << "NO" << endl;
        }
        else{

            cout << "YES" << endl;
        }
        
    }

    return 0;
}

