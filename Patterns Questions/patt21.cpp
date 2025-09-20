#include<bits/stdc++.h>
using namespace std;

void print21(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0||j==0||i==3||j==3){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

int main(){
    print21();
}