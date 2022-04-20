#include<bits/stdc++.h>
using namespace std;
constexpr float min = numeric_limits<float>::min(); // smallest positive float (§40.2)
constexpr int szi = sizeof(int); // the number of bytes in an int
void test(vector<string>& v, forward_list<int>& lst)
{
    sort(v); // sor t the vector
    sort(lst); // sor t the singly-linked list
}
template<typename Ran> // for random-access iterators
void sort_helper(Ran beg, Ran end, random_access_iterator_tag){ // we can subscript into [beg:end)
    sort(beg,end); // just sort it
}
template<typename For> // for forward iterators
void sort_helper(For beg, For end, forward_iterator_tag){ // we can traverse [beg:end)
    vector<decltype(*beg)> v {beg,end}; // initialize a vector from [beg:end)
    sort(v.begin(),v.end());
    copy(v.begin(),v.end(),beg); // copy the elements back
}
template<typename C>
void sort(C& c){
    using Iter = Iterator_type<C>;
    sort_helper(c.begin(),c.end(),Iterator_category<Iter>{});
}
template<typename C>
using Iterator_type = typename C::iterator; // C’s iterator type
template<typename Iter>
using Iterator_category = typename std::iterator_traits<Iter>::iterator_category; // Iter’s categor y
bool b1 = Is_arithmetic<int>(); // yes, int is an arithmetic type
bool b2 = Is_arithmetic<string>(); // no, std::str ing is not an arithmetic type
template<typename Scalar>
class complex {
    Scalar re, im;
    public:
        static_assert(Is_arithmetic<Scalar>(), "Sorr y, I only suppor t complex of arithmetic types");
        // ...
};
template<typename T>
constexpr bool Is_arithmetic(){
    return std::is_arithmetic<T>::value;
}
int main(){

    return 0;
}