// B. Deck of Cards-->>>

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl "\n"

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void solve() {
    ll n,k;
    string s;
    cin >> n,k;
    cin >> s;
    sort(s.begin(),s.end());
    int zeroes =0,ones=0,twoes=0;
    for(int i = 0;i<k;i++){
        if(s[i]=='0'){
            zeroes++;
        }
        else if(s[i]=='1'){
            ones++;
        }
        else{
            twoes++;
        }
    }
    vector<char> arr(n);
    for(int i = 0;i<k;i++){
        if(s[i]=='0'){
            arr[i]='-';
        }
        else if(s[i]=='1'){
            arr[n-1]='-';
            n--;
        }
        else if(s[i]=='2'){
            arr[ones]='?';
            arr[n-twoes]='?';
            ones++;
            twoes++;
        }
        else{
            arr[ones]='+';
            ones++;
        }
        }
        for(char x:arr){
            cout << x;
        }
    }
    