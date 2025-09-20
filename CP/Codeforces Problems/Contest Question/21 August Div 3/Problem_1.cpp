// A. Homework-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b,c;
        cin >> b;
        cin >> c;
        for(int i = 0;i<m;i++){
            if(c[i]=='V'){
                a.insert(0,1,b[i]);
            }
            else{
                a.append(1,b[i]);
            }
        }

        cout << a << endl;
        

    }
}