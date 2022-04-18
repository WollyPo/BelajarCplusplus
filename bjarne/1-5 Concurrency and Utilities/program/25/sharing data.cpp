#include<bits/stdc++.h>
using namespace std;
mutex m; // controlling mutex
int sh; // shared data
void f(){
    unique_lock<mutex> lck {m}; // acquire mutex
    sh += 7; // manipulate shared data
} //release mutex implicitly
class Record {
    public:
        mutex rm;
        // ...
};
// void f2(){
//     // ...
//     unique_lock<mutex> lck1 {m1,defer_lock}; // defer_lock: don’t yet try to acquire the mutex
//     unique_lock<mutex> lck2 {m2,defer_lock};
//     unique_lock<mutex> lck3 {m3,defer_lock};
//     // ...
//     lock(lck1,lck2,lck3); //acquire all three locks
//     // ... manipulate shared data ...
// } // implicitly release all mutexes
class Message { // object to be communicated
// ...
};
queue<Message> mqueue; // the queue of messages
condition_variable mcond; // the variable communicating events
mutex mmutex; // the locking mechanism
void consumer()
{
    while(true) {
    unique_lock<mutex> lck{mmutex}; // acquire mmutex
        //while (mcond.wait(lck)) /* do nothing */; // release lck and wait;
        // re-acquire lck upon wakeup
        auto m = mqueue.front(); // get the message
        mqueue.pop();
        lck.unlock(); //release lck
    // ... process m ...
    }
}
void producer(){
    while(true) {
        Message m;
        // ... fill the message ...
        unique_lock<mutex> lck {mmutex}; // protect operations
        mqueue.push(m);
        mcond.notify_one(); // notify
    } // release lock (at end of scope)
}
int main(){
    return 0;
}