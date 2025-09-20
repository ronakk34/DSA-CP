// A. Spy Detected!-->>

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for(int i = 0;i<n;i++){
//             cin >> arr[i];
//         }
//         if(arr[0]!=arr[1] && arr[1]==arr[2]){
//             cout << "1" << endl;
//         }
//         else if(arr[n-1]!=arr[n-2] && arr[n-2]==arr[n-3]){
//             cout << n << endl;
//         }
//         else{
//             for(int i = 0;i<n-2;i++){
//                 if(arr[i+1]!=arr[i] && arr[i+1]!=arr[i+2]){
//                     cout << i+2 << endl;
//                 }

//             }
//         }
        
        
//     }
//     return 0;
// }


// Code converted in Kotin by help of ai beacause idk kotlin

import java.util.Scanner

fun main() {
    val sc = Scanner(System.`in`)
    val t = sc.nextInt()
    repeat(t) {
        val n = sc.nextInt()
        val arr = IntArray(n) { sc.nextInt() }

        if (arr[0] != arr[1] && arr[1] == arr[2]) {
            println(1)
        } 
        else if (arr[n - 1] != arr[n - 2] && arr[n - 2] == arr[n - 3]) {
            println(n)
        } 
        else {
            for (i in 0 until n - 2) {
                if (arr[i + 1] != arr[i] && arr[i + 1] != arr[i + 2]) {
                    println(i + 2) // +2 because Kotlin arrays are 0-based
                }
            }
        }
    }
}
