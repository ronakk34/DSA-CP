#include<bits/stdc++.h>
using namespace std;

int main(){
    int goal = 0;
    int n,d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i = 0;i<arr.size();i++){
        int ans = d/arr[i]+1;
        n-=ans;
        if(n>=0){
            goal++;
        }
        else{
            break;
        }
    }
    cout << goal << endl;
}