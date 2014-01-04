#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;
int main(){
	double a[] = {1.1,4.4,3.3,2.2},b[8] = {8}; 
	copy(a + 2, a + 4, ostream_iterator<double>(cout, " "));	
	cout << endl;
	reverse_copy(a + 1, a + 4, ostream_iterator<double>(cout, " "));	
	cout << endl;
	//copy(a, a + 4, &b[4]);
	copy(a, a + 4, b + 4);
	copy(b, b + 8, ostream_iterator<double>(cout, " "));
	cout << endl; 
	sort(a + 1, a + 3);
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
	sort(b, b + 8, greater<double>());	
	copy(b, b + 8, ostream_iterator<double>(cout, " "));	
	cout << endl;
	return 0;
}
