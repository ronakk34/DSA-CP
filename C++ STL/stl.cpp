
#include<bits/stdc++.h>
using namespace std;

void explainVector() {
    
    vector<int> v;

    v.push_back(1); // push_back push 1 into the empty container
                    

    v.emplace_back(2); // emplace_back are the same as push_back
                      // emplace_back is faster than push_back

    vector<pair<int, int>>vec;
    v.push_back({1,2}); // For taking data type in pair form have to use 
                        // curly brackets on using push_back and do not need to use push
                        // when use emplace_back parantheses use only...
    v.emplace_back(1,2);  
    
    vector<int> v(5, 100); // Its mean v contains 5 intensases of 100..

    vector<int> v(5); // can increase size using push_back even size predefine

    vector<int> v1(5,20); // means v1 contain value of 20 for 5 times same as array
    vector<int> v2(v1); //v2 is the similar containar of v1 buts its copy of v1..
                        
    // For accesing elements we can like how we access any element in array like v[1],v[4]....

    // The other way to access elements is Iterator...

    vector<int>::iterator it = v.begin(); // v.begin gives the memory location of the first value

    it++; // it++ just shift the memory location by +1...
    cout << *(it) << " "; // *(it) gives/print the value where memory location have store in it

    it = it + 2; // memory location just shifted by 2..
    cout << *(it) << " "; // same print the value of what memory loaction save in the it...

    vector<int>::iterator it = v.end(); // v.end gives the memory location of right value of last value
                                        // for getting last value you have to use it-- 
    
    vector<int>::iterator it = v.rend(); // rend means reverse end after reversing the whole array then the value 
                                         // of right of the end....

    vector<int>::iterator it = v.rbegin(); // rbegin means reverse begin means after reversing the array the first 
                                           // value of array is reverse begin...                                     

    cout << v[0] << " " << v.at(0); // v[0]-->> access first element if v is empty cause undefined behaviour
                                    // v.at[0]-->> access first element if v is empty its throw out_of_range
    cout << v.back() << " "; //v.back means the elements is the v at the last ...

    for (vector<int>::iterator it = v.begin(); it !=v.end(); it++) {
        cout << *(it) << " ";
    }
 
// can use auto instead of using vector<int>::iterator

    for(auto it = v.begin(); it!=v.end(); it++){ 
        cout << *(it) << " ";
    }
     
    for(auto it : v){
        cout << it << " "; // auto automatically fetch the data type..
    }

    for(auto it= v.begin(); it!=v.end(); it++) {
        cout << *(it) << " ";

    }

    for(auto it : v) {
        cout << it << " ";
    }

    // {10,20,12,23}
    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35}  [start,end]

    // Insert function

    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(), 300); //{300,100,100};
    v.insert(v.begin()+ 1,2,10); //{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50} 
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    // {10,20}
    cout << v.size(); //2

    //{10,20}
    v.pop_back(); //{10} // pop_back gives default first value of vector

    // v1-> {10,20}
    // v2-> {30,40}

    v.swap(v2);  //v1 -> {30,40} ,v2 -> {10,20}

    v.clear(); //erases the entire vector
    
    cout << v.empty();

    void explainList() {
        list<int> ls;

        ls.push_back(2); //{2}
        ls.emplace_back(4); //{2,4}
        
        ls.push_front(5); //{5,2,4}

        ls.emplace_front(); // {2,4}; 


    }
    void explainDeque() {

        deque<int>dq;
        dq.push_back(1); //{1}
        dq.emplace_back(2) // {1,2}
        dq.push_front(4); //{4,1,2}
        dq.emplace_front(3); //{3,4,1,2}

        dq.pop_back(); //{3,4,1}
        dq.pop_front(); //{4,1}

        dq.back();

        dq.front();
    }

    void explainStack() {  //Stack-->> (LIFO)-->>Stack means last in first out
        stack<int> st;
        st.push(1); //{1}
        st.push(2); //{2,1}
        st.push(3); //{3,2,1}
        st.push(3); //{3,3,2,1}
        st.empalce(5); //{5,3,3,2,1}

        cout << st.top(); // prints 5 "** st[2] is valid **"

        st.pop(); //st looks like {3,3,2,1}

        cout << st.pop(); //3

        cout << st.size(); //4

        cout << st.empty();

        stack<int>st1, st2;
        st.swap(st2);

    }
        void explainQueue() { //Queue-->> (FIFO)-->> First in first out
            queue<int> q;
            q.push(1); //{1}
            q.push(2); //{1,2}
            q.emplace(4); //{1,2,4}

            q.back() += 5

            cout << q.back(); //prints 9

            //Q is {1,2,9}
            cout << q.front(); //prints 1

            q.pop(); //{2,9}

            cout << q.front(); //prints 2

            //size swap empty same as stack

        }

        void explainPQ() {
            priority_queue<int>pq;

            pq.push(5); //{5}
            pq.push(2); //{5,2}
            pq.push(8); //{8,5,2}
            pq.emplace(10); //{10,8,5,2}

            cout << pq.top(); //prints 10

            pq.pop(); //{8,5,2}

            cout << pq.top(); //prints 8

            // Size swap empty function same as others

            //Minimum Heap

            priority queue<int, vector<int>,greater<int>> pq;
            pq.push(5); //{5}
            pq.push(2); //{2,5}
            pq.push(8); //{2,5,8}
            pq.emplace(10); //{2,5,8,10}

            cout << pq.top(); //prints 2

        }

        void explaiSet() { //Set-->> Store in sorted order and unique elements only...
            set<int>st;
            st.insert(1); //{1}
            st.emplace(2); //{1,2}
            st.insert(2);  //{1,2}
            st.insert(4);  //{1,2,4}
            st.insert(3);  //{1,2,3,4}

            //Fuctionality of insert in vector
            //can be used also, that only increases
            // efficiency

            // begin(), end(), rbegin(), rend(), size(),
            //empty() and swap() are same as those of above

            //{1,2,3,4,5}
            auto it = st.find(3);

            //{1,2,3,4,5}
            auto it = st.find(5);

            // {1,4,5}
            auto it = st.erase(5); //erase 5 //takes logarithmic time

            int cnt = st.count(1);

            auto it = st.find(3);
            st.erase(it); // It takes constant time

            //{1,2,3,4,5}
            auto it1 = st.find(2);
            auto it2 = st.find(4);
            st.erase(it1, it2); //after erase {1,4,5} [first ,end)

            // lower_bound() and upper_bound() function works in the same way
            // as in vector it does.

            // This is the syntax
            auto it = st.lower_bound(2);
            auto it = st.upper_bound(3);

        }

        void explainMultiSet() {
            //Everthing is same as set
            // only stores duplicates elements also


            multiset<int>ms;
            ms.insert(1); //{1}
            ms.insert(1); //{1,1}
            ms.insert(1); //{1,1,1}

            ms.erase(1);  // all 1's erased

            int cnt = ms.count(1);

            //only a single one erased

            ms.erase(ms.find(1));

            ms.erase(ms.find(1), ms.find(1)+2);
           
            //rest all function same as set
        }

        void explainUSet() {
            unordered set<int> st;
            //lower_bound and upper bound function 
            // does not works, rest all function are same
            // as above, it does not stores in any
            // perticular order it has a better complexity
            // that set in most cases, except some when collision happens
        }

        // rest function same as vector
        // begin, end , rbegin , rend ,clear, insert, size ,swap

        void explainMap() {

            map<int, int> mpp;

            map<int, pair<int, int>> mpp;

            map< pair<int, int>, int> mpp;

            mpp[1] = 2;
            mpp.emplace({3, 1});

            mpp.insert({2, 4});

            mpp[{2,3}] = 10;
            for(auto it : mpp) {
                cout << it.first << " " << it.second << endl;

            }

            cout << mpp[1];
            cout << mpp[5];

            auto it = mpp.find(3);
            cout << *(it).second;

            auto it = mpp.find(5);

            auto it = mpp.upper_bound(3);

            //Erase,swap , size , empty are same as above

        
        }

        void explainMultimap() {
            //Everything same as map, only it can store multiple keys
            // only mpp[key] cannot be used here
        }

        void explainUnorderedMap() {
            //same as set and unordered_set difference.

        }

        bool comp(pair<int, int>p1, pair<int,int>p2) {
            if(p1.second < p2.second) {
                return true;

            } else if(p1.second == p2.second) {
                if(p1.first>p2.second) return true;
            }
            return false;
        }

        bool comp(pair<int,int> p1, pair<int,int> p2) {
            if(p1.second <p2.second) return true;
            if(p1.second > p2.second) return flase;
            //they  are same

            if(p1.first > p2.second) return true;
            return false;
        }

        void explainExtra() {

            sort(a, a+n);
            sort(v.begin(), v.end());

            sort(a+2, a+4);

            sort(a, a+n, greater<int>);

            pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};

            //sort it according to second element
            //if second element is same, then sort
            //it according to first element but in descending

            sort(a, a+n ,comp);

            // {4,1}, {2, 1}, {1, 2};

            int num = 7;
            int cnt = __builtin_popcount();

            string s = "123";

            do{
                cout << s << endl;
                while(next_permutation(s.begin(), s.end()))
            }

            int maxi=*max_element(a,a+n);
        }

        int main() {
            return 0;
        }
    }


