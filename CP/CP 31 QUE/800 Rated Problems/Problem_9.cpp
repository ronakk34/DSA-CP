// B. Blank Space-->>

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

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
        int max_zeroes = 0;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(arr[i]==0){
                count++;
                max_zeroes = max(count,max_zeroes);
            }
            else{
                count = 0;
            }
        }
        cout << max_zeroes << endl;
    }
}