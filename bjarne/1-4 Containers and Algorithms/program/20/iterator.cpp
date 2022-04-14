#include<bits/stdc++.h>
#include<iterator>
using namespace std;
bool has_c1(const string& s, char c){ // does s contain the character c?
    auto p = find(s.begin(),s.end(),c);
    if (p!=s.end())
        return true;
    else
        return false;
}
bool has_c2(const string& s, char c){ // does s contain the character c?
    return find(s.begin(),s.end(),c)!=s.end();
}
vector<string::iterator> find_all(string& s, char c){ // find all occurrences of c in s
    vector<string::iterator> res;
    for (auto p = s.begin(); p!=s.end(); ++p)
        if (*p==c)
            res.push_back(p);
    return res;
}
void test(){
    string m {"Mary had a little lamb"};
    for (auto p : find_all(m,'a'))
        if (*p!='a')
            cerr << "a bug!\n";
}
// template<typename T>
// using Iterator<T> = typename T::iterator;
// template<typename C, typename V>
// vector<Iterator<C>> find_all(C& c, V v){ // find all occurrences of v in c
//     vector<Iterator<C>> res;
//     for (auto p = c.begin(); p!=c.end(); ++p)
//         if (*p==v)
//             res.push_back(p);
//     return res;
// }
// void test2(){
//     string m {"Mary had a little lamb"};
//     for (auto p : find_all(m,'a')) // p is a str ing::iterator
//         if (*p!='a')
//             cerr << "string bug!\n";
//     list<double> ld {1.1, 2.2, 3.3, 1.1};
//     for (auto p : find_all(ld,1.1))
//         if (*p!=1.1)
//             cerr << "list bug!\n";
//     vector<string> vs { "red", "blue", "green", "green", "orange", "green" };
//     for (auto p : find_all(vs,"green"))
//         if (*p!="green")
//             cerr << "vector bug!\n";
//     for (auto p : find_all(vs,"green"))
//         *p = "vert";
// }
ostream_iterator<string> oo {cout}; // write str ings to cout
istream_iterator<string> ii {cin};
istream_iterator<string> eos {};
int main(){
    *oo = "Hello, "; // meaning cout<<"Hello, "
    ++oo;
    *oo = "world!\n"; // meaning cout<<"wor ld!\n"
    string from, to;
    cin >> from >> to; // get source and target file names
    ifstream is {from}; // input stream for file "from"
    istream_iterator<string> ii {is}; // input iterator for stream
    istream_iterator<string> eos {}; // input sentinel
    ofstream os{to}; // output stream for file "to"
    ostream_iterator<string> oo {os,"\n"}; // output iterator for stream
    vector<string> b {ii,eos}; // b is a vector initialized from input [ii:eos)
    sort(b.begin(),b.end()); // sor t the buffer
    unique_copy(b.begin(),b.end(),oo); // copy buffer to output, discard replicated values
    set<string> b {ii,eos}; // collect strings from input
    copy(b.begin(),b.end(),oo); // copy buffer to output
    string from, to;
    cin >> from >> to; // get source and target file names
    ifstream is {from}; // input stream for file "from"
    ofstream os {to}; // output stream for file "to"
    set<string> b {istream_iterator<string>{is},istream_iterator<string>{}}; // read input
    copy(b.begin(),b.end(),ostream_iterator<string>{os,"\n"}); // copy to output
    return !is.eof() || !os; // return error state (§2.2.1, §38.3)
}