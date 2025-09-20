// A. Add or XOR-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,x,y,ans,oe,eo;
    cin >> t;
    while(t--){
        cin >> a >> b >> x >> y;
        
        if(b<=a-2){
            cout << -1 << endl;
        }
        else{
            if(b==a-1){
                if((a^1)==b){
                    cout << y << endl;
                }
                else{
                    cout << -1 << endl;
                }
                
            }
            else if(a==b){
                cout << 0 << endl;
            }
            else{
                if((b-a)%2==0){
                    oe = eo = (b-a)/2;
                }
                else{
                    if(a%2==1){
                        oe = (b-a+1)/2;
                        eo = (b-a)/2;
                    }
                    else{
                        oe = (b-a)/2;
                        eo = (b-a+1)/2;
                    }
                }

                cout << oe*x+eo*min(x,y) << endl;
            }
        }
    
    }

    return 0;
}