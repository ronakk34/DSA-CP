// Calculate the sum of n values using functions-->>


#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==0) return 0;
    return n+f(n-1);
}

int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int sum=f(n);
    cout << sum << endl;
    return 0;


}


// Practice-->>

#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<1) return 0;
    return n+f(n-1);

}

int main(){
    int n;
    cin >> n;
    int sum =f(n);
    cout << sum << endl;
    return 0;
}