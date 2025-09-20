#include<bits/stdc++.h>
using namespace std;

void print18(){
    char ch='E';
    for(int i=1;i<=5;i++){
        char temp=ch;
        for(int j=1;j<=i;j++){
            cout << temp << " ";
            temp++;
        }
        cout << endl;
        ch--;
    }
}
int main() {
    print18();
}