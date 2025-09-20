// A black board

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    cin >> t;
    for(int i = 0;i<t;i++){
        cin >> n;
        if(n%4==0){
            cout << "Bob" << endl;
        }
    
        else{
            cout << "Alice" << endl;
        }
    }

    return 0;
}