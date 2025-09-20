// Print 1 to N without using i+1....

#include<bits/stdc++.h>
using namespace std;

void print(int i, int N){
    if(i<1) return;
    print(i-1,N);
    cout << i << endl;
}

int main() {
    int N;
    cin >> N;
    print(N,N);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i<1) return;
    print(i-1,n);
    cout << i << endl;

    

}

int main(){
    int n;
    cin >> n;
    print(n,n);
    return 0;
}