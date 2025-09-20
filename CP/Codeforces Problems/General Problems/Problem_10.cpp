// A. Equal Subsequnces-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s(n,'0');
        for(int i =0;i<n;i++){
            if(i<k){
                s[i] ='1';
            }
            else{
                s[i] = '0';
            }
        }
        cout << s << endl;

    }

    return 0;

}