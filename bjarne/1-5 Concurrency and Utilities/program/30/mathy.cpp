#include<cmath>
#include<numeric>
#include<list>
#include<iostream>
#include<random>
#include<functional>
#include<valarray>
using namespace std;
void f(){
    list<double> lst {1, 2, 3, 4, 5, 9999.99999};
    auto s = accumulate(lst.begin(),lst.end(),0.0); // calculate the sum
    cout << s << '\n'; // print 10014.9999
}
template<typename Scalar>
class complex {
    public:
        complex(const Scalar& re ={}, const Scalar& im ={});
    // ...
};
// void f(complex<float> fl, complex<double> db){
//     complex<double> ld {fl+sqrt(db)};
//     db += fl*3;
//     fl = pow(1/fl,2);
//     // ...
// }
class Rand_int {
    public:
        Rand_int(int low, int high) :dist{low,high} { }
        int operator()() { return dist(re); } // draw an int
    private:
        default_random_engine re;
        uniform_int_distribution<> dist;
};
void f(valarray<double>& a1, valarray<double>& a2){
    valarray<double> a = a1*3.14+a2/a1; // numer ic array operators *, +, /, and =
    a2 += a1*3.14;
    a = abs(a);
    double d = a2[7];
    // ...
}
int main(){
    f();
    using my_engine = default_random_engine; // type of engine
    my_engine re {}; // the default engine
    auto die = bind(uniform_int_distribution<>{1,6}, default_random_engine{});
    int x = die();
    Rand_int rnd {0,4}; // make a unifor m random number generator
    vector<int> histogram(5); // make a vector of size 5
    for (int i=0; i!=200; ++i)
        ++histogram[rnd()]; // fill histogram with the frequencies of numbers [0:4]
    for (int i = 0; i!=histogram.size(); ++i) { // write out a bar graph
        cout << i << '\t';
        for (int j=0; j!=histogram[i]; ++j) cout << '*';
        cout << endl;
    }
    return 0;
}