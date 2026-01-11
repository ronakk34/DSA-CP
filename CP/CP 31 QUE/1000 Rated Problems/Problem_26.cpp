// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         ll x,y,k;
//         cin >> x >> y >> k;
//         ll total_sticks = y*k+k-1;
//         ll op1 = (total_sticks+x-2)/(x-1);
//         cout << op1+k << endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    vector<ll> pref1(n);
    pref1[0]=v[0];
    for(int i =1;i<n;i++){
        pref1[i]=pref1[i-1]+v[i];
    }
    vector<ll> a(n);
    for(int i = 0;i<n;i++){
        a[i]=v[i];
    }
    sort(a.begin(),a.end());
    vector<ll> pref2(n);
    pref2[0]=a[0];
    for(int i = 1;i<n;i++){
        pref2[i]=pref2[i-1]+a[i];
    }
    ll m;
    cin >> m;
    while(m--){
        ll t,l,r;
        cin >> t >> l >> r;
        l--;
        r--;
        if(t==1){
            cout << pref1[r]-((l==0)?0:pref1[l-1]);
        }
        else{
            cout << pref2[r]-((l==0)?0:pref2[l-1]);
        }
        cout << endl;
    }
    
}