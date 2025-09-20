// B. Pathless

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s;
        int base_sum=0;
        cin >> n >> s;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            base_sum+=arr[i];
        }
        if(base_sum>s){
            for(int i = 0;i<n;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if(base_sum==s){
            cout << -1 << endl;
        }
        else{
            if(s-base_sum == 1){
                sort(arr,arr+n);
                for(int i = 0;i<n;i++){
                    if(arr[i]==1){
                        swap(arr[i],arr[n-1]);
                    }
                }
                for(int i = 0;i<n;i++){
                    cout << arr[i] << " ";
                }
            }
            else{
                cout << -1 << endl;
            }
        }
        

    }
}