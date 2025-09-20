// // B. The Secret Number -->>

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;   // use long long instead of int
//         cin >> n;
//         vector<long long> ans;
//         int k = 1;
//         while(k < 18){   // only need up to ~18 powers
//             long long d = 1;
//             for(int i=0;i<k;i++) d *= 10; // compute 10^k
//             d += 1;
            
//             if(d <= n && n % d == 0){
//                 ans.push_back(n/d);
//             }
//             k++;
//         }
        
//         if(ans.empty()){
//             cout << 0 << "\n";
//         } else {
//             sort(ans.begin(), ans.end());
//             cout << ans.size() << endl;
//             for(auto x: ans) cout << x << " ";
//             cout << "\n";
//         }
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<long long> ans;
        long long n,d;
        cin >> n;
        int k = 1;
        while(k<18){
            for(int i = 0;i<k;i++){
                d=pow(10,k);
                d+=1;
            }
            if(d<=n && n%d==0){
                ans.push_back(d/n);
            }
            k++;

        }

        if(ans.empty()){
            cout << "0" << endl;
        }
        else{
            sort(ans.begin(),ans.end());
            cout << ans.size() << endl;
            for(auto x: ans) cout << x << " ";
            cout << endl;
        }

    }
}

