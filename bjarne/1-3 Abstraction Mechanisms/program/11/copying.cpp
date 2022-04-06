#include<bits/stdc++.h>
#include<complex>
using namespace std;
class Vector {
    private:
        double* elem; // elem points to an array of sz doubles
        int sz;
    public:
        Vector(){}
        Vector(int s); // constructor: establish invariant, acquire resources
        ~Vector() { delete[] elem; } // destructor: release resources
        Vector(const Vector& a); // copy constr uctor
        Vector(const Vector& a); // copy constr uctor
        Vector& operator=(const Vector& a); // copy assignment
        Vector(Vector&& a); // move constr uctor
        Vector& operator=(Vector&& a); // move assignment
        Vector& operator=(const Vector& a); // copy assignment
        double& operator[](int i);
        const double& operator[](int i) const;
        int size() const;
};
Vector::Vector(const Vector& a) // copy constr uctor
:elem{new double[sz]}, // allocate space for elements
sz{a.sz}{
    for (int i=0; i!=sz; ++i) // copy elements
        elem[i] = a.elem[i];
}
Vector& Vector::operator=(const Vector& a) // copy assignment
{
    double* p = new double[a.sz];
    for (int i=0; i!=a.sz; ++i)
        p[i] = a.elem[i];
    delete[] elem; // delete old elements
    elem = p;
    sz = a.sz;
    return *this;
}
// Vector operator+(const Vector& a, const Vector& b)
// {
//     if (a.size()!=b.size())
//     throw Vector_size_mismatch{};
//     Vector res(a.size());
//     for (int i=0; i!=a.size(); ++i)
//     res[i]=a[i]+b[i];
//     return res;
// }
Vector::Vector(Vector&& a)
:elem{a.elem}, // "grab the elements" from a
sz{a.sz}{
    a.elem = nullptr; // now a has no elements
    a.sz = 0;
}
// void f(const Vector& x, const Vector& y, const Vector& z){
//     Vector r;
//     // ...
//     r = x+y+z;
//     // ...
// }
// void test(complex z1){
//     complex z2 {z1}; // copy initialization
//     complex z3;
//     z3 = z2; // copy assignment
//     // ...
// }
void bad_copy(Vector v1){
    Vector v2 = v1; // copy v1’s representation into v2
    v1[0] = 2; // v2[0] is now also 2!
    v2[1] = 3; // v1[1] is now also 3!
}
Vector f(){
    Vector x(1000);
    Vector y(1000);
    Vector z(1000);
    // ...
    z = x; // we get a copy
    y = std::move(x); // we get a move
    // ...
    return z; // we get a move
};
std::vector<thread> my_threads;
// Vector init(int n){
//     thread t {heartbeat}; // run hear tbeat concurrently (on its own thread)
//     my_threads.push_back(move(t)); // move t into my_threads
//     // ... more initialization ...
//     Vector vec(n);
//     for (int i=0; i<vec.size(); ++i) vec[i] = 777;
//     return vec; // move res out of init()
// }
// auto v = init(); // star t hear tbeat and initialize v
class Shape {
    public:
        Shape(const Shape&) =delete; // no copy operations
        Shape& operator=(const Shape&) =delete;
        Shape(Shape&&)=delete; // no move operations
        Shape& operator=(Shape&&) =delete;
        ~Shape();
        // ...
};
int main(){
    
    return 0;
}