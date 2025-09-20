// Hash map-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //Precompute

    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter the value of q";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the value of number";
        cin >> number;

        //fetch

        cout << mpp[number] << endl;
 
    }

    return 0;
}