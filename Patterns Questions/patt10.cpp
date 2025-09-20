#include<bits/stdc++.h>
using namespace std;

void print10() {
    for(int i=1;i<2*5-1;i++){
        int starts=i;
        if(i > 5) starts = 2*5-i;
        for(int j=1;j<=starts;j++){
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    print10(); 

    
}

