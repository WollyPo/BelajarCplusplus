#include<bits/stdc++.h>
using namespace std;
// deklarasi tanpa definisi, karena fungsi sqrt sudah ada 
double sqrt(double); // the square root function takes a double and returns a double
// deklarasi perlu didefinisi, kalau tidak akan error
class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem; // elem points to an array of sz doubles
        int sz;
};
Vector::Vector(int s):elem{new double[s]}, sz{s}{}
double& Vector::operator[](int i){return elem[i];}
int Vector::size(){return sz;}
int main(){
    cout<<sqrt(0.16)<<endl;
    Vector v(6);
    cout<<v.size()<<endl;
    return 0;
}