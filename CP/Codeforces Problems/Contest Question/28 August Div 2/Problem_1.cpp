// A. In the Dream-->>

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int e = c-a;
        int f = d-b;
        if(max(a,b)<=2*(min(a,b)+1) && max(e,f)<=2*(min(e,f)+1)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
        

    }
}