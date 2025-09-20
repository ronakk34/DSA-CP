// A. Cover in Water-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool found = false;
        int total_empty_cell = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '.' && i+1<n && s[i+1] == '.' && i+2 <n && s[i+2] == '.' ){
                found = true;
                break;
            }
            if(s[i]=='.'){
                total_empty_cell++;
            }
        }
        if(found){
            cout << "2" << endl;
        }
        else{
            cout << total_empty_cell << endl;
        }
    }
}