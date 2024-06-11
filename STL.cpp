#include<bits/stdc++.h>
using namespace std ;

int main(){
    //Pair

    pair<int , int> p = {1 , 3} ;
    cout<<p.first<<" "<<p.second ;

    pair<int , pair<int , int>> p1 = {1 , {3 , 4}} ;

    cout<<" "<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl ;

    //Array of Pairs

    pair<int , int> arr[] = {{1,2} , {3,4} , {5,6} , {7,8}} ;

    cout<<arr[1].second ;

}

//Vectors

void vectors(){
    //Implemented by a SINGLY LINKED LIST .


    vector<int> v ;

    v.push_back(1) ;
    v.emplace_back(2) ;

    vector<pair<int , int>> vect ;

    vect.push_back({1 , 2}) ;
    vect.emplace_back(1 , 3) ;

    vector<int> v1(5 , 100);    //{100 , 100 , 100 , 100 , 100}
    vector<int> v2(5) ;         //5 instances with garbage values .

    vector<int> v3(5 , 20) ;
    vector<int> v4(v3) ;        //Copy v3 to v4 .    

    //Iterators

    vector<int>::iterator i = v.begin() ;

    //v.begin() : Iterator pointing to the first element of the vector .
    //Iterator points to the memory address .

    //cout<<*i<<endl ;    //Gives value of element at position i .

    //vector<int>::iterator i = v.end() ;             //End points to a memory location just after the last element .
    //vector<int>::reverse_iterator i = v.rend() ;    //Reverse the vector and points right after end (end is at first this time ) .
    //vector<int>::reverse_iterator i = v.rbegin() ;  //Reverse the vector and points to the first element which is in the end this time .
    
    v.back() ;  //Last element .

    vector<int>vec ;

    vec.emplace_back(1) ;
    vec.emplace_back(3) ;
    vec.emplace_back(6) ;
    vec.emplace_back(8) ;

    for(vector<int>::iterator it = vec.begin() ; it != vec.end() ; it++){
        cout<<*(it)<<" " ;
    }
    cout<<endl ;
    for (auto it = vec.begin() ; it != vec.end() ; it++){
        cout<<*(it)<<" " ;
    }
    cout<<endl ;
    for(auto it : vec){     //"it" is not an iterator but an integer here .
        cout<<it<<" " ;
    }

    v.erase(v.begin() + 1) ;
    v.erase(v.begin() , v.begin() + 3) ;    //Everything till v.begin() + 3 will be deleted but not v.begin() + 3 itself .

    //Insert Function

    vector<int> a(2 , 100) ;            //{100 , 100}
    a.insert(a.begin() , 300) ;         //{300 , 100 , 100}
    a.insert(a.begin() + 1 , 2 , 10) ;  //{300 , 10 , 10 , 100 , 100}

    vector<int> copy(2 , 50) ;          //{50 , 50}
    a.insert(a.begin() , copy.begin() , copy.end()) ;   //{50 , 50 , 300 , 10 , 10 , 100 , 100}

    //Size
    cout<<a.size()<<endl ;

    //{10 , 20}
    a.pop_back() ;  //{10}

    //v1 -> {10 , 20}
    //v2 -> {30 , 40}

    v1.swap(v2) ; //v1 -> {30 , 40} ; v2 -> {10 , 20}

    v.clear() ;     //Erases the entire vector .

    cout<<v.empty()<<endl ;

}

void List(){
    //Implemented by a DOUBLY LINKED LIST .

    list<int> ls ;

    ls.push_back(2) ;       //{2}
    ls.emplace_back(4) ;    //{2 , 4}

    //Insert is used if vector .
    ls.push_front(5) ;      //{5 , 2 , 4}

    ls.emplace_front() ;    //{2 , 4}

    //Rest functions same as vector .
    //Begin , end , rbegin , rend , clear , insert , size , swap .
}

void Deque(){
    deque<int> dq ;
    dq.push_back(1) ;       //{1}
    dq.emplace_back(2) ;    //{1 , 2}
    dq.push_front(4) ;      //{4 , 1 , 2}
    dq.emplace_front(3) ;   //{3 , 4 , 1 , 2}

    dq.pop_back() ;         //{3 , 4 , 1}
    dq.pop_front() ;        //{4 , 1}

    dq.back() ;

    dq.front() ;

    //Rest functions are same as vector .
    //begin , end , rbegin , rend , clear , insert , size , swap .

}

void stacks(){
    //Every operation is O(1) ;

    stack<int> stk ;
    stk.push(1) ;       //{1}
    stk.push(2) ;       //{2 , 1}
    stk.push(3) ;       //{3 , 2 , 1}
    stk.push(4) ;       //{4 , 3 , 2 , 1}
    stk.emplace(5) ;    //{5 , 4 , 3 , 2 , 1}

    cout<<stk.top() ;   //Print 5

    stk.pop() ;         //{4 , 3 , 2 , 1}

    cout<<stk.top() ;   // 4

    cout<<stk.size() ;  // 4

    cout<<stk.empty() ; //Check if empty or not .

    stack<int>st1 , st2 ;
    st1.swap(st2) ;

}

void Queue(){
    queue<int> q ;
    q.push(1) ;         //{1}
    q.push(2) ;         //{1 , 2}
    q.push(3) ;         //{1 , 2 , 3}
    q.push(4) ;         //{1 ,2 , 3 , 4}

    q.back() += 5 ;     //{1 , 2 , 3 , 9}

    cout<<q.front() ;   //Prints 1

    q.pop() ;           //{2 , 3 , 9}

    cout<<q.front() ;   //prints 2 .

    //Size , swap , empty same as stack .

}

void PQ(){
    priority_queue<int>pq ;

    pq.push(5) ;            //{5}
    pq.push(2) ;            //{5 , 2}
    pq.push(8) ;            //{8 , 5 , 2 }
    pq.push(11) ;           //{11 , 8 , 5 , 2}
    pq.push(15) ;           //{15 , 11 , 8 , 5 , 2}

    cout<<pq.top() ;        //Prints 10 .

    pq.pop() ;              //{11 , 8 , 5 , 2}

    cout<<pq.top() ;        //Prints 11 .

    //Size , swap , empty functions same as others .

    //MinHeap
    //Minimum element stays on top .

    priority_queue<int , vector<int> , greater<int>> pq ;
    pq.push(5) ;            //{5}
    pq.push(2) ;            //{2 , 5}
    pq.push(8) ;            //{2 , 5 , 8}
    pq.emplace(10) ;        //{2 , 5 , 8 , 10}

    cout<<pq.top() ;        //Prints 2 .

}

void Set(){
    //A tree is maintained .
    //Stores everything in sorted order and
    //Every element should be unique .

    //Everything has logarithmic time complexity .

    set<int>s ;

    s.insert(1) ;       //{1}
    s.insert(2) ;       //{1 , 2}
    s.insert(2) ;       //{1 , 2}
    s.insert(4) ;       //{1 , 2 , 4}
    s.insert(3) ;       //{1 , 2 , 3 , 4}

    //Functionality of insert in vector .
    //Can be used also , that only increases .
    //efficiency .

    //begin() , end() , rbegin() , rend() , size() .
    //empty() and swap() are some as those of above .

    //{1 , 2 , 3 , 4 , 5}
    auto it = s.find(3) ;       //Returns an iterator which points to 3 .


    auto it = s.find(8) ;       //Returns an iterator which points after 5 .

    s.erase(5) ;                //Erases 5 , takes logarithmic time .

    int cnt = s.count(1) ;      //Boolean either 1(exists) or 0(doesn't exist) .

    auto it = s.find(3) ;
    s.erase(it) ;               //It takes constant time .

    //{1 , 2 , 3 , 4 , 5}
    auto it1 = s.find(2) ;
    auto it2 = s.find(4) ;      
    s.erase(it1 , it2) ;        //After erase {1 , 4 , 5}  [first , last]

    //lower_bound() and upper_bound() function works in the same way .
    //as in vector it does .

    //This is the syntax .

    auto it = s.lower_bound(2) ;
    auto it = s.upper_bound(3) ;
    
}

void Multiset(){
    //Everything is same as set .
    //Only stores duplicate elements .

    multiset<int>ms ;

    ms.insert(1) ;      //{1}
    ms.insert(4) ;      //{1 , 4}
    ms.insert(4) ;      //{1 , 4 , 4}

    ms.erase(1) ;       //All 1's erased .

    int cnt = ms.count(1) ;

    //Only a single one erased .
    ms.erase(ms.find(1)) ;

    //Rest all functions same as set .

}

void UnorderedSet(){
    unordered_set<int> st ;
    //Lower_bound and Upper_bound do not work .
    //Rest all functions same as set but not ordered .
    //As it doesn't store in any particular order , it has a better complexity ,
    //in most cases except when collisions happen .
}

void Map(){

    //Everything is stored in sorted order .

    map<int , int> mpp1 ;

    //map<int , pair<int , int>> mpp ;

    //map<pair<int , int> , int> mpp2 ;

    mpp1[1] = 2 ;
    mpp1.emplace(3 , 1) ;

    mpp1.insert({2 , 4}) ;

    cout<<mpp1[1]<<endl ;

    auto it = mpp1.find(3) ;
    //auto i = *(it) ;
    
    //cout<< i.second <<endl ;
    cout<< it->second <<endl ;

    auto it = mpp1.lower_bound(2) ;
    auto it = mpp1.upper_bound(3) ;

    //erase , swap ,  size , empty , are same as above .

}