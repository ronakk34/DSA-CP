// A.Race-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        int x;
        int y;
        cin >> a >> x >> y;
        if((a<x && x<y) || (a<y && y<x)){
            cout << "Yes" << endl;
        }
        else if((x<y && y<a) || (y<x && x<a) ){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        
    }
    return 0;

}
