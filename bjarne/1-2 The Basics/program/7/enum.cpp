#include<bits/stdc++.h>
using namespace std;
enum class Traffic_light { green, yellow, red };
Traffic_light& operator++(Traffic_light& t){
// prefix increment: ++
    switch(t){
        case Traffic_light::green: return t = Traffic_light::yellow;
        case Traffic_light::yellow: return t = Traffic_light::red;
        case Traffic_light::red: return t = Traffic_light::green;
    }
    return t = Traffic_light::green;
}
int main(){
    Traffic_light light = Traffic_light::red;
    cout<<int(light)<<endl;
    Traffic_light next = ++light;
    cout<<int(light)<<endl;
    cout<<int(next)<<endl;
    return 0;
}