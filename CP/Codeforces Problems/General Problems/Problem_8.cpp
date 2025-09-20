// A. DR. TC-->>


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        int ans = 0;
        for(int i =0;i<n;i++){
            if(s[i]=='0'){
                ans++;

            }
            else{
                ans+=n-1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// void solve() {
//     int n; cin >> n;
//     string s; cin >> s;
//     int ans = 0;
//     for (auto x: s) {
//         if (x == '0') ans++;
//         else ans += n - 1;
//     }
//     cout << ans << '\n';
// }
 
// int main() {
//     int t; cin >> t;
//     while (t--) solve();
//     return 0;
// }










// #include<bits/stdc++.h>
// using namespace std;

// void solve(int i, int &ans, int n, int arr[]){
//     if(i>=n) return;
//     if(arr[i]==1){
//         ans+=n-1;
//     }
//     else{
//         ans+=1;
//     }
//     solve(i+1,ans,n,arr);

// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         for(int i = 0;i<n;i++){
//             cin >> arr[i];
//         }
        
//         int ans = 0;
//         solve(0,ans,n,arr);
//         cout << ans << endl;
//     }


//     return 0;
// }