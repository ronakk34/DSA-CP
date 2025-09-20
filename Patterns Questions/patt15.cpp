#include<bits/stdc++.h>
using namespace std;
void print15(){
    for(int i=1;i<=5;i++){
        for(char ch='A';ch <='A'+5-i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main() {
    print15();
}