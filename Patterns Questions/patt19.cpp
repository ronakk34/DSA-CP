#include<bits/stdc++.h>
using namespace std;

void print19() {
    for(int i=0;i<5;i++){
        //starts
        for(int j=0;j<5-i;j++){
            cout << "*";
        }
        //space
        for(int j=0;j<2*i;j++){
            cout << " ";
        }
        // starts
        for(int j=0;j<5-i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print20(){
    for(int i=0;i<5;i++){
        //starts
        for(int j=0;j<=i;j++){
            cout << "*";

        }
        //spaces
        
        for(int j=0;j<8-2*i;j++){
            cout << " ";
        }

        //starts
        for(int j=0;j<=i;j++){
            cout << "*";
        }

        cout << endl;
    }

}
int main(){
    print19();
    print20();
}