#include<bits/stdc++.h>
using namespace std;
typedef int int32_t; // equivalent to ‘‘using int32_t = int;’’
typedef short int16_t; // equivalent to ‘‘using int16_t = short;’’
typedef void(*PtoF)(int); // equivalent to ‘‘using PtoF = void(*)(int);’’
using int32_t = long;
template<class T>
class vector {
    using value_type = T; // every container has a value_type
    // ...
};
template<class T>
class list {
    using value_type = T; // every container has a value_type
    // ...
};
template<typename T>
using Vector = std::vector<T, My_allocator<T>>;
using Char = char;
//using Uchar = unsigned Char; // error
using Uchar = unsigned char; // OK
int main(){
    using Pchar = char*; // pointer to character
    using PF = int(*)(double); // pointer to function taking a double and returning an int
    Pchar p1 = nullptr; // p1 is a char*
    char* p3 = p1; // fine
    return 0;
}