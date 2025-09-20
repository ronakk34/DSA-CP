#include<bits/stdc++.h>
// #include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator it= v.begin(); // V.begin point only memory location 
    for(vector<int>::iterator it =v.begin(); it !=v.end(); it++){

        cout << *(it) << " ";
    }

   

}