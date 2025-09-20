// B. The Picky Cat->>

#include <bits/stdc++.h>
#include<cmath>
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
            arr[i] = abs(arr[i]);
            
        }

        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        int mediun = sortedArr[n/2];


        if(arr[0]>mediun){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;
}
