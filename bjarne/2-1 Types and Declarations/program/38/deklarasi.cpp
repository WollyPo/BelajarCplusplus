#include<bits/stdc++.h>
using namespace std;
struct Date { int d, m, y; };
int day(Date* p) { return p->d; }
double sqrt(double);
template<class T> T abs(T a) { return a<0 ? -a : a; }
constexpr int fac(int n) { return (n<2)?1:n*fac(n-1); } // possible compile-time evaluation (§2.2.3)
//constexpr double zz { ii*fac(7) }; // compile-time initialization
using Cmplx = std::complex<double>; // type alias (§3.4.5, §6.5)
struct User; // type name
enum class Beer { Carlsberg, Tuborg, Thor };
namespace NS { int a; }
struct Date { int d, m, y; }; // Date is a struct with three members
int day(Date* p) { return p->d; } // day is a function that executes the specified code
using Point = std::complex<short>;// Point is a name for std::complex<short>
double sqrt(double); // function declaration
extern int error_number; // variable declaration
struct User; // type name declaration
double sqrt(double d) { /* ... */ }
int error_number = 1;
struct User { /* ... */ };
struct Date { int d, m, y; };
using Point = std::complex<short>; // Point is a name for std::complex<short>
int day(Date* p) { return p->d; }
const double pi {3.1415926535897};
void f(){
    int count {1}; // initialize count to 1
    const char* name {"Bjarne"}; // name is a var iable that points to a constant (§7.5)
    count = 2; // assign 2 to count
    name = "Marian";
}
int main(){
    char ch;
    string s;
    auto count = 1;
    const double pi {3.1415926535897};
    extern int error_number;
    const char* name = "Njal";
    const char* season[] = { "spring", "summer", "fall", "winter" };
    vector<string> people { name, "Skarphedin", "Gunnar" };
    char ch; // set aside memory for a char and initialize it to 0
    auto count = 1; // set aside memory for an int initialized to 1
    const char* name = "Njal"; // set aside memory for a pointer to char
    // set aside memory for a string literal "Njal"
    // initialize the pointer with the address of that string literal
    int count;
    int count; // error : redefinition
    extern int error_number;
    //extern short error_number; // error : type mismatch
    extern int error_number;
    extern int error_number; // OK: redeclaration
    char ch;
    string s;
    return 0;
}