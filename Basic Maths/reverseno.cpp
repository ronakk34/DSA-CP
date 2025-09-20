#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int rev=0;

    while(num>0){
        int ld = num%10;
        rev=rev*10+ld;
        num = num/10;

    }

    cout << rev;

}