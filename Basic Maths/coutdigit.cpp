// Count digit....
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while(n<0){
         n=n/10;
         count+=1;
    }
    // return count;
    cout << count;

    // Second method...

    int cnt = (int)log10(n)+1;
    cout << cnt;

}



