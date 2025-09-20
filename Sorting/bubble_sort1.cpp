// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout << arr[n] << " ";
//     }

//     return 0;
// }


// Second Method

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n, int arr[]){
    for(int i=n-1;i>=0;i--){
        int didswap = 0;
        for(int j=0;j<=i-1;j++){ 
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }


        }

        if(didswap==0){
            break;
        }

        cout << "runs\n";
    }


}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    bubble_sort(n,arr);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;

}

