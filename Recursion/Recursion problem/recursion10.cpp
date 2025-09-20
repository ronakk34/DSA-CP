// Reverse a array using Recursion...-->>

#include<bits/stdc++.h>
using namespace std;

void f(int l,int r,int arr[]){
    if(l>=r) return;
    swap(arr[r], arr[l]);
    f(l+1,r-1,arr);

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    f(0,n-1,arr);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


//   2nd Method --->>>

#include<bits/stdc++.h>
using namespace std;

void f(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);

}

int main() {
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int arr[n];
    cout << "Enter the value of array";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    f(0,arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}