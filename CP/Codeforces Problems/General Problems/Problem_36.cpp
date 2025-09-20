// A. Ambitious Kid-->>>

#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i =0;i<n;i++){
            cin >> arr[i];
            arr[i] = abs(arr[i]);
        }
        int min = arr[0];
        for(int i = 0;i<n-1;i++){
            if(arr[i+1]<min){
                min = arr[i+1];
            }
         
        }
        cout << min << endl;
    }
