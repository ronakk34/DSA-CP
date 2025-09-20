#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int arr[n];
    cout << "Enter the value of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];

    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout << "Enter the value of q:";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the value of number:";
        cin >> number;
        cout << "The frequency of the number is:" << hash[number] << endl;
       

        
    }
 


}