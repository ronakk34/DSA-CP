// Squares of Triangles-->>

#include<bits/stdc++.h>
using namespace std;
void solve(int l1, int b1, int l2, int b2, int l3, int b3){
    if((l1==l2 && l2==l3) && b1+b2+b3==l1){
        cout << "Yes" << endl;
    }
    else if((b1==b2 && b2==b3) && l1+l2+l3==b1){
        cout << "Yes" << endl;
    }
    else if((l2==l3 && b2+b3==b1 && l1+l2==b1) || (l1==l3 && b1+b3==b2 && l2+l1==b2) || (l1==l2 && b1+b2==b3 && l3+l1==b3)){
        cout << "Yes" << endl;
    }
    else if((b2==b3 && l2+l3==l1 && b1+b2==l1) || (b1==b2 && l3+l1==l2 && b3+b1==l3) || (b1==b2 && l1+l2==l3 && b3+b1==l3)){
        cout << "Yes" << endl;
    }

    else{
        cout << "No" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    int l1,b1,l2,b2,l3,b3;
    while(t--){
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        solve(l1,b1,l2,b2,l3,b3);

    }

    return 0;
}