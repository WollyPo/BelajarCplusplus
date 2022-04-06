#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Vector {
    private:
        T* elem; // elem points to an array of sz elements of type T
        int sz;
    public:
        using value_type = T;
        Vector(int s); // constructor: establish invariant, acquire resources
        ~Vector() { delete[] elem; } // destructor: release resources
        // ... copy and move operations ...
        T& operator[](int i);
        const T& operator[](int i) const;
        int size() const { return sz; }
};
// template<typename Container, typename Value>
// Value sum(const Container& c, Value v){
//     for (auto x : c)
//         v+=x;
//     return v;
// }
// void user(Vector<int>& vi, list<double>& ld, vector<complex<double>>& vc){
//     int x = sum(vi,0); // the sum of a vector of ints (add ints)
//     double d = sum(vi,0.0); // the sum of a vector of ints (add doubles)
//     double dd = sum(ld,0.0); // the sum of a list of doubles
//     auto z = sum(vc,complex<double>{}); // the sum of a vector of complex<double>
//     // the initial value is {0.0,0.0}
// }
// template<typename T>
// class Less_than {
//     const T val; // value to compare against
//     public:
//     Less_than(const T& v) :val(v) { }
//     bool operator()(const T& x) const { return x<val; } // call operator
// };
// // void fct(int n, const string & s){
// //     bool b1 = lti(n); // true if n<42
// //     bool b2 = lts(s); // true if s<"Backus"
// //     // ...
// // }
// template<typename C, typename P>
// int count(const C& c, P pred){
//     int cnt = 0;
//     for (const auto& x : c)
//         if (pred(x))
//             ++cnt;
//     return cnt;
// }
// void f(const Vector<int>& vec, const list<string>& lst, int x, const string& s){
//     cout << "number of values less than " << x
//     << ": " << count(vec,Less_than<int>{x})
//     << '\n';
//     cout << "number of values less than " << s
//     << ": " << count(lst,Less_than<string>{s})
//     << '\n';
// }
// // void f(const Vector<int>& vec, const list<string>& lst, int x, const string& s){
// //     cout << "number of values less than " << x
// //     << ": " << count(vec,[&](int a){ return a<x; })
// //     << '\n';
// //     cout << "number of values less than " << s
// //     << ": " << count(lst,[&](const string& a){ return a<s; })
// //     << '\n';
// // }
// template<class C, class Oper>
// void for_all(C& c, Oper op){ // assume that C is a container of pointers
//     for (auto& x : c)
//         op(*x); // pass op() a reference to each element pointed to
// }
// void user(){
//     vector<unique_ptr<Shape>> v;
//     while (cin)
//     v.push_back(read_shape(cin));
//     for_all(v,[](Shape& s){ s.draw(); }); // draw_all()
//     for_all(v,[](Shape& s){ s.rotate(45); }); // rotate_all(45)
// }
// template<typename T, typename ... Tail>
// void f(T head, Tail... tail)
// {
//     g(head); // do something to head
//     f(tail...); // tr y again with tail
// }
// void f() { } // do nothing
// template<typename T>
// void g(T x){
//     cout << x << " ";
// }
// template<typename C>
// using Element_type = typename C::value_type;
// template<typename Container>
// void algo(Container& c){
//     Vector<Element_type<Container>> vec; // keep results here
//     // ...
// }
// template<typename Key, typename Value>
// class Map {
// // ...
// };
// template<typename Value>
// using String_map = Map<string,Value>;
// String_map<int> m; // m is a Map<str ing,int>
int main(){
    // Less_than<int> lti {42}; // lti(i) will compare i to 42 using < (i<42)
    // Less_than<string> lts {"Backus"}; // lts(s) will compare s to "Backus" using < (s<"Backus")
    cout << "first: ";
    //f(1,2.2,"hello");
    cout << "\nsecond: ";
    //f(0.2,'c',"yuck!",0,1,2);
    cout << "\n";
    return 0;
}