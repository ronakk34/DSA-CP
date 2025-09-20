// C. Brr Brrr patapmin

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        // vector<vector<int>> grid(n+1,vector<int>(n));
        vector<int> p(n*2);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                int g;
                cin >> g;
                p[i+j+1] = g;

            }
        }
        p[0] = 2*n*(2*n+1)/2 - accumulate(p.begin()+1,p.end(),0);
        for(int i =0;i<2*n;i++){
            cout << p[i] << ' ';
        }
        cout << endl;
    }
}