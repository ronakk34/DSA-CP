// A letter home-->>

#include<bits/stdc++.h>
using namespace std;

void solve(int n, int s , int arr[]){

    sort(arr,arr+n);
    
    if(arr[0]>=s){
        cout << arr[n-1]-s << endl;
    }
    else if(arr[n-1]<=s){
        cout << s-arr[0] << endl;
    }
    
    else{
        cout << (arr[n-1]-arr[0])+min(s-arr[0], arr[n-1]-s) << endl;
    }
}

int main(){
    int t;
    int n;
    int s;
    cin >> t;

    while(t--){

        cin >> n >> s;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
    
        solve(n,s, arr);
    }


    return 0;
}