// B. Divan and a New Project-->>

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        vector<pair<ll,ll>> map;
        for(int i = 0;i<n;i++){
            map.push_back({arr[i], i});
        }
        sort(map.rbegin(),map.rend());
        // ll mid = (n+1)/2;
        // vector<pair<ll,ll>> seq;
        // for(int i = 1;i<=n+1;i++){
        //     if(i!=mid){
        //         seq.push_back({abs(mid-i), i});
        //     }
        // }
        // sort(seq.begin(),seq.end());
        vector<ll> ans(n+1,0);
        ans[0]=0;
        ll coor = 1;
        ll times = 0;
        for(int i = 0;i<n;i++){
            ans[map[i].second+1]=coor;
            times+= 2*abs(coor)*map[i].first;
            if(coor<0){
                coor = abs(coor)+1;
            }
            else{
                coor = -coor;
            }
        }
        cout << times << endl;
        for(int x:ans){
            cout << x << " ";
        }
        cout << endl;
    }
}