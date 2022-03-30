#include<bits/stdc++.h>
using namespace std;
class Vector {
    public:
        Vector(int s) :elem{new double[s]}, sz{s} { }  // constr uct a Vector
        double& operator[](int i) { return elem[i]; }   // element access: subscripting
        int size() { return sz; }
    private:
        //double∗ elem;   // pointer to the elements
        double* elem;
        int sz;         // the number of elements
};
double read_and_sum(int s)
{
    Vector v(s);    // make a vector of s elements
    for (int i=0; i!=v.size(); ++i)
        cin>>v[i];  // read into elements (6 angka input)
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i];  // take the sum of the elements
    return sum;
}
int main(){
    double res = read_and_sum(6); // a Vector with 6 elements
    cout<<res<<endl;
    return 0;
}