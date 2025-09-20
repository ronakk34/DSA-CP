// A. In Search of an Easy Problem-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        bool found = false;
        for(int i = 0;i<n;i++){
            int x;
            cin >> x;
            if(x==1){
                found = true;
                break;
            }
        }
        if(found){
            cout << "Hard" << endl;
        }
        else{
            cout << "Easy" << endl;
        }
    
    }
