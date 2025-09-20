// B. ST. CHROMA-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        if(n==x){
            for(int i = 0;i<n;i++){
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        vector<int> ans;
        for(int i = 0;i<x;i++){
            ans.push_back(i);   
        }
        for(int i = x+1;i<n;i++){
            ans.push_back(i);
        }
        ans.push_back(x);
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
}



