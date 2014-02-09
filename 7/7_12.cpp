#include <iostream>
#include <vector>	
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
	char st[11] = "abcdefghij";	
	vector<char> a(st,st + 10);
	vector<char> :: iterator p;
	p = a.begin();
	vector<char> :: reverse_iterator ps;	
	for( p = a.begin(); p != a.end(); ++p)
		cout << *p << " "; 
	cout << endl;
	for( p = a.end() - 1; p != a.begin() ; p--)
		cout << *p << " "; 
	cout << endl;
	for(ps = a.rbegin(); ps != a.rend(); ps ++ )
		cout << *ps << " ";
	cout << endl;
	for(-- ps ; ps != a.rbegin() -1; ps--)
		cout << *ps << " ";
	cout << endl;
}
