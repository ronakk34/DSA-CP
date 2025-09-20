// Check the no. is armstrong or not...-->>

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int number = n;
    int sum =0;
    while(n>0){
        int ld = n%10;
        sum = sum+ld*ld*ld;
        n=n/10;

    }
    if(sum == number) cout << "NO. is armstrong";
    else cout << "NO. is not armstrong";
}