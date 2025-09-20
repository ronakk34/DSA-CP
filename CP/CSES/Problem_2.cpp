// Missing Number-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        if(arr[i]!=i+1){
            cout << i+1 << " ";
        }
    }
    cout << n+1 << " ";
}