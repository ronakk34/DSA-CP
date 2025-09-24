// // Repetitions-->>


#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    if (n == 0) { // handle empty string
        cout << 0 << endl;
        return;
    }

    int max_repeat = 1;
    int current_repeat = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            current_repeat++;
        } else {
            current_repeat = 1;
        }
        max_repeat = max(max_repeat, current_repeat);
    }

    cout << max_repeat << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // number of test cases
    while (t--) {
        solve();
    }
}



// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     string s;
//     cin >> s;
//     int n = s.size();
//     if(n == 0) {
//         cout << 0 << endl;
//         return;
//     }

//     long long mx_len = 1;
//     long long current_len = 1;

//     for(int i = 0; i < n - 1; i++) {
//         if(s[i] == s[i+1]) {
//             current_len++;
//         } else {
//             current_len = 1;  
//         }
//         mx_len = max(mx_len, current_len);  
//     }

//     cout << mx_len << endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;   // number of test cases
//     while(t--) {
//         solve();
//     }
// }


