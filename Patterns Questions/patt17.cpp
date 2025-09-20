#include<bits/stdc++.h>
using namespace std;

void print17(){
    for(int i=0;i<5;i++){
      
        //space 
        for(int j=0;j<5-i-1;j++){
            cout << " ";
        }

        //characters
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            cout << ch;
            if(j<= breakpoint) ch++;
            else ch--;
        }


        //spaces
        for(int j=0;j<5-i-1;j++){
            cout << " ";
        }

        cout << endl;
    }
}

int main(){
    print17();
}