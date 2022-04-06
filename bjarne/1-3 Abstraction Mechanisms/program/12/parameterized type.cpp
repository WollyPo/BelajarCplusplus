#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Vector {
    private:
        T* elem; // elem points to an array of sz elements of type T
        int sz;
    public:
        Vector(int s); // constructor: establish invariant, acquire resources
        ~Vector() { delete[] elem; } // destructor: release resources
        // ... copy and move operations ...
        T& operator[](int i);
        const T& operator[](int i) const;
        int size() const { return sz; }
};
template<typename T>
Vector<T>::Vector(int s){
    //if (s<0) throw Negative_size{};
    elem = new T[s];
    sz = s;
}
template<typename T>
const T& Vector<T>::operator[](int i) const{
    if (i<0 || size()<=i)
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}
template<typename T>
T* begin(Vector<T>& x){
    return &x[0]; // pointer to first element
}
template<typename T>
T* end(Vector<T>& x){
    return x.begin()+x.size(); // pointer to one-past-last element
}
void write(const Vector<string>& vs){ // Vector of some strings
    for (int i = 0; i!=vs.size(); ++i)
        cout << vs[i] << '\n';
}
// void f2(const Vector<string>& vs){ // Vector of some strings
//     for (auto& s : vs)
//         cout << s << '\n';
// }
int main(){
    Vector<char> vc(200); // vector of 200 characters
    Vector<string> vs(17); // vector of 17 strings
    Vector<list<int>> vli(45); // vector of 45 lists of integers
    write(vs);
    return 0;
}