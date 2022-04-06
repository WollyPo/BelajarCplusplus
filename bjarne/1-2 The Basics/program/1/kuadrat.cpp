#include <iostream>
using namespace std;
double square(double x){
    return x*x;
}
void print_square(double x){
    cout<<"the square of "<<x<<" is "<<square(x)<<"\n";
}
int main(){
    //std::cout<<"Hello, World!\n";
    print_square(1.234); //1.52276
    return 0;
}