// Prints 1 to N

#include<bits/stdc++.h>
using namespace std;

void print(int i, int N)  {
    if(i>N) return;
    cout << i << endl;
    print(i + 1, N);
}

int main() {
    int N;
    cin >> N;
    print(1, N);
    return 0;
}
