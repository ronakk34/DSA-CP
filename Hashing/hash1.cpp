

#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

int f(int num, int arr[],int n) {
    for(int i=0;i<n;i++){
        if(arr[i] == num) cnt+=1;
        return cnt;

    }

}


int main(){
    int num;
    int n;
    
    cout << "Enter the value of no.:";
    cout << "Enter the value of n:";
    cin >> n;
    cin >> num;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    f(num , arr,n);
    cout << cnt << endl;
    return 0;
}

// 2nd Method --->>>

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int n;
//     cout << "Enter the value of n:";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the value of array:";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     } 
    
//     //Precompute

//     int hash[13] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }


//     int q;
//     cout << "Enter the value of q";
//     cin >> q;
//     while(q--){
//         int number;
//         cout << "Enter the value of number";
//         cin >> number;
//         cout << "The frequncy of the number is:" << hash[number] << " ";
//     }
//     return 0;

    
// }

//For revison only-->>

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the value of n";
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     //Precompute 

//     int hash[13] = {0};
//     for(int i = 0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     //Check prequency

//     int q;
//     cout << "Enter the value of q";
//     cin >> q;

//     while(q--){
//         int number;
//         cout << "Enter the value of number:";
//         cin >> number;
//         cout << "The frequency of number is:" << hash[number] << " ";
//     }
// }