// A. United We Stand-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arrA(n);
        vector<int> arrB;
        vector<int> arrC;
        for(int i = 0;i<n;i++){
            cin >> arrA[i];
        }
        sort(arrA.begin(),arrA.end());
        int mx = arrA[n-1];
        if(arrA[0]==arrA[n-1]){
            cout << -1 << endl;
        }

        else{
            for(int x:arrA){
                if(x==mx){
                    arrC.push_back(x);
                }
                else{
                    arrB.push_back(x);
                }
            }
            // for(int i = 0;i<n;i++){
            //     if(arrA[i]==mx){
            //         arrC.push(arrA[i]);
            //     }
            //     else{
            //         arrB.push(arrA[i]);
            //     }
            // }
            cout << arrB.size() << " " << arrC.size() << endl;
            for(int x:arrB){
                cout << x << " ";
            }
            cout << endl;
            for(int x:arrC){
                cout << x << " ";
            }
        }
    }
}