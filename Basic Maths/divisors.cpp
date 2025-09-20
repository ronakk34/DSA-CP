// Print the divisors --->>>

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number:";
    cin >> n;
    for(int i=1;i<=n;i++){
        if (n%i ==0) cout << i << " ";
      
    }


}

// 2nd Method -->>>

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ls;
    int n;
    cout << "Enter the Number";
    cin >> n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%10==0){
            ls.push_back(i);
            if((n/i)!=i) {
                ls.push_back(n/i);
            }
        }
    }

    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
    
}