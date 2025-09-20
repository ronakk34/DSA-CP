// A. Goals of Victory-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n-1);
        for(int i = 0;i<n-1;i++){
            cin >> arr[i];
        }
        int Missing_team_efficieny = accumulate(arr.begin(),arr.end(), 0);
        cout << -(Missing_team_efficieny) << endl;

    }
}