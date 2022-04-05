#include <bits/stdc++.h>
using namespace std;
// use compiler ISO c++11
void increment()
{
	int v[] = {0,1,2,3,4,5,6,7,8,9};
	for (auto& x : v){
		++x;
		cout<<x<<endl;
	}
}
int count_x(char* p, char x)
// count the number of occurrences of x in p[]
// p is assumed to point to a zero-ter minated array of char (or to nothing)
{
	if (p==NULL) return 0;
	int count = 0;
	for (; *p!=0; ++p)
		if (*p==x)
			++count;
	return count;
}
int main() {
	increment();
	char p[] = {'i', 'j', 'i', 'k', 'i'};
	char x = 'i';
	cout<<count_x(p, x);
	return 0;
}