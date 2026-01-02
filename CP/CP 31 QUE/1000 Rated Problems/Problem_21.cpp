#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        string temp;
        int maxi = 0;
        if(a==b){
            cout << "0" << endl;
            continue;
        }

        for(int i = 0;i<n;i++){
            for(int j =1;j<=n-i;j++){
                temp = a.substr(i,j);
                if(b.find(temp)!=string::npos){
                    int size_sub = temp.size();
                    maxi = max(maxi,size_sub);
                }
            }
        }
        cout << n+m-2*maxi << endl;
    }
}