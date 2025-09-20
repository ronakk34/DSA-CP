// A. Mix Mex Max -->>

#include<bits/stdc++.h>
using namespace std;


int mex(int a, int b, int c) {
    bool seen[4] = {};
    for (int x : {a,b,c}) if (x < 4) seen[x] = true;
    for (int i = 0; i < 4; i++) if (!seen[i]) return i;
    return 3;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        bool found = false;
        int n,mexx,minn,maxx;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        for(int i = 0;i<n-2;i++){
            mexx = mex(arr[i],arr[i+1],arr[i+2]);
            maxx = max(arr[i],arr[i+1],arr[i+2]);
            minn = min(arr[i],arr[i+1],arr[i+2]);
            if(mexx!=maxx-minn){
                found = true;
                break;
            }
        }
        if(found){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}