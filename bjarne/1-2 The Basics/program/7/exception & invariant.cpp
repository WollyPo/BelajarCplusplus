#include<bits/stdc++.h>
using namespace std;
class Vector {
    public:
        Vector(int s);
        double& operator[](int i);
        int size();
    private:
        double* elem; // elem points to an array of sz doubles
        int sz;
};
Vector::Vector(int s){
    if(s<0) throw length_error{"Vector::Vector"};
    elem = new double[s];
    sz = s;
}
double& Vector::operator[](int i){
    if(i<0 || size()<=i) throw out_of_range{"Vector::operator[]"};
    return elem[i];
}
int Vector::size(){return sz;}
void test(){
    try{
        Vector v(-27);
    }
    catch(length_error){
        cout<<"length error"<<endl;
    }
    catch(bad_alloc){
        cout<<"bad alloc"<<endl;
    }
}
void f(Vector& v){
    try{
        v[v.size()] = 7;
    }
    catch(out_of_range){
        cout<<"error out of range"<<endl;
    }
}
int main(){
    Vector v(6);
    f(v);
    test();
    return 0;
}