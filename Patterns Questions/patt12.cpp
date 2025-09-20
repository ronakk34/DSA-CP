#include<bits/stdc++.h>
using namespace std;

void print12() {
    int i;
    int space =2*(5-i);
   for(int i=1;i<=5;i++){
      //numbers
      for(int j=1;j<=i;j++){
        cout<< j;
      }
      //space
      for(int j=1;j<2*(4-i);j++){
        cout << " ";
      }
      //numbers
      for(int j=i;j>=1;j--){
          cout << j;
          
        }
        cout << endl;
        space =-2;
    }
}
int main() {
    print12();
}