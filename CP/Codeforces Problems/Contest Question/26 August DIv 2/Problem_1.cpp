// A. Painting With Two Colors-->>

#include<bits/stdc++.h>
using namspace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        if(a<=b){
            if((n-b)%2==0){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            if((n-a)%2==0 && (n-b)%2==0){
                cout << "Yes" << endl;

            }
            else{
                cout << "No" << endl;
            }
        }
    }
}