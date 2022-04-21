#include<bits/stdc++.h>
using namespace std;
void f(const vector<double>& v, double* res);// take input from v; place result in *res
class F {
    public:
        F(const vector<double>& vv, double* p) :v{vv}, res{p} { }
        void operator()(); // place result in *res
    private:
        const vector<double>& v; // source of input
        double*res; //target for output
};
int main(){
    vector<double> some_vec;
    vector<double> vec2;
    // ...
    double res1;
    double res2;
    thread t1 {f,some_vec,&res1}; // f(some_vec,&res1) executes in a separate thread
    thread t2 {F{vec2,&res2}}; // F{vec2,&res2}() executes in a separate thread
    t1.join();
    t2.join();
    cout << res1 << ' ' << res2 << '\n';
    return 0;
}