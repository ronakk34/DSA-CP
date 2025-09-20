// // A. Recycling Center-->>

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int cost = 0;

        while (!arr.empty()) {
            // sort each time so largest free is easy to pick
            sort(arr.begin(), arr.end());

            // find the largest free bag (<= c)
            int idx = -1;
            for (int i = (int)arr.size() - 1; i >= 0; i--) {
                if (arr[i] <= c) { idx = i; break; }
            }

            if (idx != -1) {
                // free destruction
                arr.erase(arr.begin() + idx);
            } else {
                // all expensive now
                cost += arr.size();
                arr.clear();
                break;
            }

            // multiply remaining by 2
            for (long long &x : arr) x *= 2;
        }

        cout << cost << "\n";
    }
}




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int cost = 0;
//         int n,c;
//         cin >> n >> c;
//         vector<int> arr(n);
//         for(int i = 0;i<n;i++){
//             cin >> arr[i];
//         }
//         sort(arr.begin(),arr.end());
//         reverse(arr.begin(),arr.end());
//         for(int i = 0;i<n;i++){
//             if(arr[i]<=c){
//                 arr.erase(arr.begin(),i);
//                 for(int i = 0;i<n;i++){
//                     arr[i]*=2;
//                 }
//             }

//         }
//         for(int i = 0;i<n;i++){
//             cost++;

//         }
//         cout << cost << endl;
//     }
// }