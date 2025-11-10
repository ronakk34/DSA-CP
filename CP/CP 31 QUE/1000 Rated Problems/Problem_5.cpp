// B. Monsters-->>


// RON IS HERE..

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl "\n"

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

bool cmp(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    else{
       return a.first>b.first;
    }
}

void RON() {
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll>> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    for(int i = 0;i<n;i++){
        if(arr[i].first%k==0){
            arr[i].first=k;
        }
        else{
            arr[i].first = arr[i].first%k;
        }
    }
    sort(arr.begin(),arr.end(),cmp);
    for(auto &x:arr){
        cout << x.second << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   
    while(t--) {
        RON();
    }
}