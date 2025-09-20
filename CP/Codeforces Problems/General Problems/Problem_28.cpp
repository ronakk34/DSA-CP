// A. Shashliks

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        int k,a,b,x,y;
        cin >> k >> a >> b >> x >> y;
        if(k>=a || k>=b){
            if(x<y){
                while(k>=a){
                    k=k-x;
                    ans++;
                }
                while(k>=b){
                    k=k-y;
                    ans++;
                }
            }
            else if(x==y){
                if(a<b){
                    while(k>=a){
                        k=k-x;
                        ans++;
                    }
                }
                else if(a==b){
                     while(k>=a){
                        k=k-x;
                        ans++;
                    }
                }
                else{
                     while(k>=b){
                        k=k-y;
                        ans++;
                    }
                    
                }
            }
            else{
                while(k>=b){
                    k=k-y;
                    ans++;
                }
                while(k>=a){
                    k=k-x;
                    ans++;
                }

            }
        }
        cout << ans << endl;
    }
}