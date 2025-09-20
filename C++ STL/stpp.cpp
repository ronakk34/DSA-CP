#include<bits/stdc++.h>

using namespace std; // if not use that we have to write every time std:: before cin and cout..

// void print(){      // Void function not return anything
//     cout << "Ron" << endl;
//  } 


// int sum(int a, int b){ // int function return 
//     return a + b;
    
//     return 0;
// }

// int main(){

//     print();

    
//     int s = sum(1, 5);
//     cout << s << endl;
//     return 0; 
// }


// Pairs-->>

// void explainPair() {
//     // pair<int, int> p= {1,3};

//     // cout << p.first << " " << p.second;

//     pair<int, pair<int, int>> p = {1,{3,4}};

//     cout << p.first << " " << p.second.second << " " << p.second.first;

//     pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
//     cout << arr[1].second;

// }


// vector-->>


void explainVector() {
    vector<int> v;

    v.push_back(1);  // Push back use to enters the values in the v 
    v.emplace_back(2); // emplace back is the same as push back its also gives value to the empty container v (emplace back is the faster than push back)

    vector<pair<int, int>>vec;

    vec.push_back({1,2});  // uses of curly braces when use push back in vector to enters pair data..
    vec.emplace_back(1,4); // NO need to use curly braces when use emplace back in  to enter pair data..

    vector<int> v(5,100);  // Container of size five is declare of value of 100 five times..

    vector<int> v(5); // Container of size five is declare of garbage value...

    vector<int> v1(5,20);
     vector<int> v2(v1);   //v2 is the similar container of v1 v2={20,20,20,20,20} // Vector are dynamic in the nature its size can predefine even
     //the size define before


}


//Acess elements in the vector... -->> can be acess same as array (other ways are the iterators)

void explainIterator(){
    vector<int> v;
    vector<int>::iterator it = v.begin();
    it++;
    
    cout << *(it) << " ";
    
    it = it+2;
    cout << *(it) << " ";
    
    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " v.at[0];

    cout << v.back() << " ";  // v.back -->> Gives the last value...

    //Printing value using iterator in vector using for loop-->>

    for(vector<int>::iterator it= v.begin(); it!=v.end();it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it!=v.end(); it++){   // Auto automatically assing data type according to data type
        cout << *(it) << " ";
    }

    for(auto it : v){
        cout << it << " ";
    }

    
    //Erase function...
    
    v.erase(v.begin()+1);
    
    //{10,20,12,23,25}
v.erase(v.begin() + 2, v.begin() + 4);  //  {10,20,25} [start,end]

//Insert Function --

vector<int>v(2,100); //{100,100}

v.insert(v.begin(),300);    //{300,100,100}
v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

vector<int> copy(2,50);
v.insert(v.begin(), copy.begin(),copy.end()); //{50,50,300,10.10.100,100}

//{10,20}
cout << v.size(); //2

//{10,20}
v.pop_back(); //{10}

//v1-> {10,20}
//v2-> {30,40}
v1.swap(v2); //v1-> {30,40} , v2->{10,20}

v.clear(); //Erase the entire vector...

cout << v.empty();


}

//List -->>

void explainList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4}

    ls.emplace_front(); //{2,4}

    //rest function same as vector
    //begin, end , rbegin, rend , clear , insert , size, swap..

    //INserting in vector is costly as compare to list in terms of time complexity....
}


void explainDeque() {
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();

    dq.front();

    //rest function same as vector
    //begin, end , rbegin, rend , clear , insert , size, swap..

}

void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}

    cout << st.top();  // Prints 5 "** st[2] is invalid **""

    st.pop(); //{4,3,2,1}

    cout << st.top(); //3

    cout << st.size(); //4

    cout << st.empty();  //-> False..

    stack<int> st1,st2;
    st1.swap(st2);

    //In stack there are only few opreation can perform like push emplace pop size empty...

}

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{2}
    q.emplace(3); //{1,2,3}

    q.back() +=5

    cout << q.back(); // Prints 9

    // Q is {1,2,9}
    cout q.front(); // Print 1

    q.pop(); //{2,9}

    cout << q.front(); // Print 2

    // Size swap empty same as stack
}

void explainPQ(){
1
    //Maximum Heap  1

    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{8,5,2}
    pq.push(10);//{10,8,5,2}

    cout << pq.top(); //prints 10

    //size swap empty same as other

    //Minimum Heap

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout << pq.top(); // Prints 2


}

void explainSet(){
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}   /set stores in sorted order\

    // Functionally of insert in vector can be used also, that only increase
    // efficiency

    //begin(), end(), rbegin(), rend(), size(), 
    //empty(), and swap() are same as those of above

    //{1,2,3,4,5}
    auto it = st.find(3); //return iterator

    //{1,2,3,4,5}
    auto it = st.find(6); //If elements not end the set return st.end()

    //{1,4,5}
    st.erase(5); //Erase 5 // takes logarithmic time

    int cnt = st.count(1); //If 1 is in the set then return 1 if not in the set then it will return 0...

    auto it = st.find(3);
    st.erase(it);

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2); //After erase {1,4,5} [first, last)

    // lower_bound() and upper_bound() function works in the same way 
    // as in vector it does..

    //This is the syntax

    auto it = st.lower_bound(2);
    auto it = st.lower_bound(3);

}

void explainMultiset() {
    //Everthing is same as set
    //Only stores duplicates elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //all 1's erased

    int cnt = ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1) + ms.find(1)+2);

    //rest all function same as set

}

void explainUSet(){
    unordered set<int> st;
    // lower_bound and upper_bound function
    //does not works, rest all function are same
    // particular order it has a better complexity
    // Than set in most cases, except some when collision happens
}

void explainMap() {
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map< pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3,1});

    mpp.insert({2,4});

    mpp({2,3}) = 10;

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;

    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(4);

    //Erase swap size empty same as above

}

void explainMultimap(){
    //Everything same as map, only it can store multiple keys (duplicate keys)
    // only mpp[keys] cannot be used here
}

void explainUnorderedMap(){
    // Same as set and unordered_set difference..  //Unique keys but unordered not sorted\\
}
}

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    
    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>);

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

    //sort it according to second elements
    //if second element is same, then sort
    //it according to first element but in descending

    sort(a, a+n, comp);

    //{{4,1}, {2,1}, {1,2}}

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";
    s.sort(s.begin(), s.end());

    do{
        cout << s << endl;
    } while(next_permutation(s.begin*(), s.end()));

    int maxi = *max_element(a,a+n);

}

int main(){
    return 0;
}

