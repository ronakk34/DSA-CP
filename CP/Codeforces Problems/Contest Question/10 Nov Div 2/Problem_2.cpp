// B. Siga ta Kymata-->>


// RON IS HERE..



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n+1);
        int mx = 1;
        int mn = 1;
        for(int i = 1;i<=n;i++){
            cin >> p[i];
            if(p[i]<p[mn]){
                mn = i;
            }
            if(p[i]>p[mx]){
                mx = i;
            }
        }
        string x;
        cin >> x;
        x = " "+x;
        if(x[1]=='1'|| x[n]=='1'){
            cout << "-1" << endl;
            
        }
        else if(x[mx]=='1'|| x[mn]=='1'){
            cout << "-1" << endl;
            
        }
        else{
            cout << "5" << endl;
            cout << "1" << " " <<  mx << endl;;
            cout << "1" << " " <<  mn << endl;;
            cout << mn << " " << n << endl;
            cout << mx << " " << n << endl;
            cout << min(mx,mn) << " " << max(mx,mn) << endl;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// #define pb push_back
// #define all(v) v.begin(), v.end()
// #define sz(v) (int)v.size()
// #define endl "\n"

// const ll INF = 1e18;
// const ll MOD = 1e9 + 7;

// void RON() {
//     ll n;
//     cin >> n;
//     vector<ll> p(n+1);
//     ll mn = 1;
//     ll mx = 1;
//     for(int i = 1;i<=n;i++){
//         cin >> p[i];
//         if(p[i]<p[mn]){
//             mn = i;
//         }
//         if(p[i]>p[mx]){
//             mx = i;
//         }
//     }
//     string x;
//     cin >> x;
//     x = " "+x;
//     if(x[1]=='1' || x[n]=='1'){
//         cout << "-1" << endl;
//     }
//     else if(x[mn]=='1' || x[mx]=='1'){
//         cout << '-1' << endl;
//     }
//     else{
//         cout << "5" << endl;
//         cout << "1" << " " << mn << endl;
//         cout << "1" << " " << mx << endl;
//         cout << mn << " " << n << endl;
//         cout << mx << " " << n << endl;
//         cout << min(mx,mn) << " " << max(mn,mx) << endl;
//     }

// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;   
//     while(t--) {
//         RON();
//     }
// }