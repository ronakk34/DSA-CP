#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n = 100000;
    vector<int> isprime(n+1,1);
    isprime[0]=0;
    isprime[1]=0;
    for(int i = 2;i*i<=n;i++){
        if(isprime[i]){
            for(int j =i*i;j<=n;j+=i){` 
                isprime[j]=0;
            }
        }
    }
    ll t;
    cin >>t;
    while(t--){
        ll d;
        cin >> d;
        ll p = 1+d;
        while(isprime[p]!=1){
            p++;
        }
        ll q = p+d;
        while(isprime[q]!=1){
            q++;
        }
        cout << min(p*p*p,p*q) << endl;
    }

}