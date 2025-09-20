// Hashing for characters

#include<bits/stdc++.h>
using namespace std;

int f(char c, string s ,int n){
    int count=0;
    for(int i=0;i<n;i++){
        s[i]==c; 
    }
    return count;

}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c;
    cout << "Enter the character:";
    cin >> c;
    int result =f(c,s,n);
    cout << result << endl;
    return 0;


}

// Second Method-->>

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; //ron
    cin >> s; 
    

    //Pre Compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;

    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c] << endl;
    }

    return 0;

}