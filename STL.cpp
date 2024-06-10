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