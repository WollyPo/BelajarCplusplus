#include<bits/stdc++.h>
using namespace std;
void* allocate(size_t n); // get n bytes
// void user(const vector<int>& vx){
//     constexpr int bufmax = 1024;
//     alignas(int) buffer[bufmax]; // uninitialized
//     const int max = min(vx.size(),bufmax/sizeof(int));
//     uninitialized_copy(vx.begin(),vx.begin()+max,buffer);
//     // ...
// }
int main(){
    cout << "size of long " << sizeof(1L) << '\n';
    cout << "size of long long " << sizeof(1LL) << '\n';
    cout << "largest float == " << numeric_limits<float>::max() << '\n';
    cout << "char is signed == " << numeric_limits<char>::is_signed << '\n';
    int16_t x {0xaabb}; // 2 bytes
    int64_t xxxx {0xaaaabbbbccccdddd}; // 8 bytes
    int_least16_t y; // at least 2 bytes (just like int)
    int_least32_t yy; // at least 4 bytes (just like long)
    int_fast32_t z; // the fastest int type with at least 4 bytes
    auto ac = alignof('c'); // the alignment of a char
    auto ai = alignof(1); // the alignment of an int
    auto ad = alignof(2.0); // the alignment of a double
    int a[20];
    auto aa = alignof(a); // the alignment of an int
    return 0;
}