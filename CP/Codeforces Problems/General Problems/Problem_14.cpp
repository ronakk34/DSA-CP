// A. Lever

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int ans = 0;
        cin >> n;
        int a[n],b[n];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        for(int i = 0;i<n;i++){
            cin >> b[i];
            if(a[i]>b[i]){
                ans = ans+a[i]-b[i];
            }
        }
        ans++;
        cout << ans << endl;
        
    }
    return 0;
}
