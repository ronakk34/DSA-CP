#include<bits/stdc++.h>
using namespace std;

int fibb(int n){
    if(n<=1) return n;
    int lst = fibb(n-1);
    int slst = fibb(n-2);
    return lst + slst;

}

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int sum = fibb(n);
    cout << sum << endl;
    return 0;

}
