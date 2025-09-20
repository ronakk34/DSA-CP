// B. Shrink-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];

        for(int i = 1;i<=n;i++){
            arr[i]=i;
        }
        // sort(arr,arr+n);
        swap(arr[2],arr[n]);
        for(int i = 1;i<=n;i++){
            cout << arr[i] << " ";
        }
    }

    return 0;
}