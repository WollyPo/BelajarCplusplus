#include<bits/stdc++.h>
using namespace std;
void f(){
    int var = 1;
    int& r {var}; // r and var now refer to the same int
    int x = r; // x becomes 1
    r = 2; // var becomes 2
}
void g(){
    int var = 0;
    int& rr {var};
    ++rr; //var is incremented to 1
    int* pp = &rr; // pp points to var
}
void increment(int& aa){
    ++aa;
}
void f2(){
    int x = 1;
    increment(x); // x = 2
}
int next(int p) { return p+1; }
void g2(){
    int x = 1;
    increment(x); // x = 2
    x = next(x); // x = 3
}
template<class K, class V>
class Map { // a simple map class
    public:
        V& operator[](const K& v); // return the value corresponding to the key v
        pair<K,V>* begin() { return &elem[0]; }
        pair<K,V>* end() { return &elem[0]+elem.size(); }
    private:
        vector<pair<K,V>> elem; // {key,value} pairs
};
template<class K, class V>
V& Map<K,V>::operator[](const K& k){
    for (auto& x : elem)
    if (k == x.first)
    return x.second;
    elem.push_back({k,V{}}); // add pair at end (§4.4.2)
    return elem.back().second; // return the (default) value of the new element
}
int main(){
    int var = 1;
    int& r1 {var}; // OK: r1 initialized
    // int& r2; // error : initializer missing
    extern int& r3; // OK: r3 initialized elsewhere
    //double& dr = 1; // error : lvalue needed
    const double& cdr {1}; // OK
    double temp = double{1}; // first create a temporar y with the right value
    const double& cdr {temp}; // then use the temporar y as the initializer for cdr
    Map<string,int> buf;
    for (string s; cin>>s;) ++buf[s];
    for (const auto& x : buf)
        cout << x.first << ": " << x.second << '\n';
    return 0;
}
// input    : aa bb bb aa aa bb aa aa
// output   :
// aa: 5
// bb: 3