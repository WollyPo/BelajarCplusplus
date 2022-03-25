#include <bits/stdc++.h>
using namespace std;

void some_function() // function that doesn’t return a value
{
    double d = 2.2; // initialize floating-point number
    int i = 7; // initialize integer
    d = d+i; // assign sum to d
    // i=d∗i; // assign product to i (truncating the double d*i to an int)
    i=int(d)*i;
}

int main() {
    double d1 = 2.3;
    double d2 {2.3};
    complex<double> z = 1; // a complex number with double-precision floating-point scalars
    complex<double> z2 {d1,d2};
    complex<double> z3 = {1,2}; // the = is optional with { ... }
    vector<int> v {1,2,3,4,5,6}; // a vector of ints
    int i1 = 7.2; // i1 becomes 7
    int i2 {7.2}; // error : floating-point to integer conversion
    int i3 = {7.2}; // error : floating-point to integer conversion (the = is redundant)
    auto b = true; // a bool
    auto ch = 'x'; // a char
    auto i = 123; // an int
    auto d = 1.2; // a double
    int y = 3, x = 2;
    auto z = sqrt(y); // z has the type of whatever sqr t(y) returns

    return 0;
}