// // The sum of first n numbers--->>>

#include<bits/stdc++.h>
using namespace std;

int sum =0;

void  print(int i, int n){
    if(i>n) return;
    sum = sum+i;
    print(i+1, n);
    
}

int main(){
    int n;
    cin >> n;
    print(1,n);
    cout << sum << " ";
    return 0;

}

//  2nd Method ---->>>

// #include<bits/stdc++.h>
// using namespace std;

// void print(int i, int sum) {
//     if(i<1) {
//         cout << sum << endl;
//         return;
        
//     } 
//     print(i-1,sum+i);
// }

// int main(){
//     int i;
//     cout << "Enter the value of i" << endl;
//     cin >> i;

//     print(i,0);
//     return 0;


// }

// --->>> Practice --->>

// #include<bits/stdc++.h>
// using namespace std;

// int sum = 0;

// int  print(int i,int n){
//     if(i<n) return;
//     sum+=i;
//     print(i+1,n);


// }

// int main(){
//     int n;
//     cin >> n;
//     print(1,n);
//     return 0;
// }

// --->>>> Practice --->>

// #include<bits/stdc++.h>
// using namespace std;

// void print(int i,int sum){
//     if(i<1){
//         cout << sum << endl;
//         return;
//     } 
//     print(i-- , sum+=i);
     
// }

// int main(){
//     int i;
//     cin >> i;
//     print(i,0);
//     return 0;
// }