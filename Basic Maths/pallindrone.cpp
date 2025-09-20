#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rev = 0;
    
    int original = n;

    while(n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n = n/10;
    }

    if(rev==original) {
        cout << "Number is Pallindrone.";
    }
    else {
        cout << "Number is'nt Pallindrone.";
    }
}