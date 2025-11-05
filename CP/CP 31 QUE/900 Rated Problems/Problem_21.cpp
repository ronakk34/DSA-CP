// B. Make it Divisible by 25-->>

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl "\n"

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

int min_operations(string n,string possible_value){
    int operations = 0;
    int checker_index = possible_value.size()-1;
    for(int i = n.size()-1;i>=0;i--){
        if(n[i]==possible_value[checker_index]){
            checker_index--;
            if(checker_index<0){
                break;
            }
        }
        else{
            operations++;
        }
    }
    if(checker_index>=0){
        operations = INT_MAX;
    }
    return operations;
}
void RON() {
    string n;
    cin >> n;
    vector<string> possible_value = {"00","25","50","75"};
    int ans = INT_MAX;
    for(auto possible_value:possible_value){
        ans = min(ans,min_operations(n,possible_value));
    }
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;   
    while(t--) {
        RON();
    }
}