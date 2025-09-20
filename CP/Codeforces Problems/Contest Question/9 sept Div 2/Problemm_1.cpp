// A. Shift Sort-->>

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
        // vector<int> s(n);
        int count = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            // cin >> s[i];
            if(s[i]=='1'){
                count++;
            }
        }
        for(int i = n-count;i<n;i++){
            if(s[i]=='0'){
                ans++;
            }
        }
        cout << ans << endl;
        
    }
}
