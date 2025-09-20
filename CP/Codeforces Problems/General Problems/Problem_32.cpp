// A. Doremy's Paint 3-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);
        map<int,int> freq;
        for(int i = 0;i<n;i++){
            // int x;
            // cin >> x
            cin >> arr[i];
            freq[arr[i]]++;
        }
        if(freq.size()>=3){
            cout << "No" << endl;
        }
        else{
            long long freq_1 = freq.begin()->second;
            long long freq_2 = freq.rbegin()->second;
            if(freq_1 == freq_2){
                cout << "Yes" << endl;
            }
            else if(n%2==1 && abs(freq_1-freq_2) == 1){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        // sort(arr.begin(),arr.end());
        


    }
}