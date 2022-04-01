#include<bits/stdc++.h>
using namespace std;
class Vector {
    private:
        double* elem; // elem points to an array of sz doubles
        int sz;
    public:
        Vector(){}
        Vector(initializer_list<double>); // initialize with a list
    // ...
        // void push_back(double); // add element at end increasing the size by one
    // ...
};
Vector::Vector(initializer_list<double> lst) // initialize with a list
:elem{new double[lst.size()]}{
    sz = lst.size();
    copy(lst.begin(),lst.end(),elem); // copy from lst into elem
}
Vector read(istream& is) {
    Vector v;
    // for (double d; is>>d;) // read floating-point values into d
    //     v.push_back(d); // add d to v
    return v;
}
int main(){
    Vector v1 = {1,2,3,4,5}; // v1 has 5 elements
    Vector v2 = {1.23, 3.45, 6.7, 8}; // v2 has 4 elements

    return 0;
}