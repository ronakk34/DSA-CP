#include<bits/stdc++.h>
using namespace std;

void print11() {
    int start=1;
    for(int i=0;i<=4;i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;

    }
}

int main() {
   print11();
}