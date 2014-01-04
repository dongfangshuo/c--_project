#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;
int main(){
	char a[] = "wearehere!",b[11];	
	reverse(a, a + 10);
	copy(a, a + 10, ostream_iterator<char>(cout));
	cout << endl;
	copy(a, a + 11, b);
	sort(a, a + 10);
	cout << a << endl;
	cout << b << endl;	
	reverse_copy(a, a + 10, b);
	cout << b << endl;
	reverse(b + 2, b + 8);
	copy(b + 2,b + 8, ostream_iterator<char>(cout));
	cout << endl;
	sort(a, a + 10, greater<char>());
	cout << a << endl;
	cout << (*find(a, a + 10, 'e') == 'e' ) << " " << (*find(a, a + 10, 'O') == 'O') << endl;
	return 0;
}
