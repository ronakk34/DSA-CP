#include<bits/stdc++.h>
using namespace std;

void print7(){
    for(int i=0;i<=4;i++){
        for(int j=1;j<4-i+1;j++){
        cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for(int j=1;j<4-i+1;j++){
            cout << " ";
        }
        cout << endl;
    
    }
}

void print8(){
    for(int i=0;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout << " ";
        }
        for(int j=1;j<=2*5-(2*i+1);j++){
            cout << "*";
        }
        for(int j=1;j<=i;j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    print7();
    print8();
}