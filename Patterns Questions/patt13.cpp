#include<bits/stdc++.h>
using namespace std;

void print13(){
    int num=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num = num+1;
        }
        cout << endl;

    }
}
int main() {
    print13();
}