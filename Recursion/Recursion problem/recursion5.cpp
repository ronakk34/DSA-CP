// Print N to 1 without using i-1;

#include<bits/stdc++.h>
using namespace std;

void print(int i, int N){
    if(i>N) return;
    print(i+1,N);
    cout << i << endl;
}

int main() {
    int N;
    cin >> N;
    print(1,N);
    return 0;
}
