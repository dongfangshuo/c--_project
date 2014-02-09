#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <iterator>
using namespace std;
int main(){
	double a[] = {1.1,4.4,3.3,2.2};
	vector<double> va(a, a + 4),vb(4);
	copy(va.begin(),va.end(),ostream_iterator<double>(cout, " "));
	cout << endl;
	reverse_copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
	cout << endl;
	reverse_copy(va.begin(),va.end(),vb.begin());
	copy(vb.begin(),vb.end(),ostream_iterator<double>(cout, " "));
	cout << endl;
	sort(va.begin(),va.end());
	sort(vb.begin(),vb.end(),greater<double>());
	copy(va.begin(),va.end(),ostream_iterator<double>(cout, " "));
	cout << endl;
	copy(vb.begin(),vb.end(),ostream_iterator<double>(cout, " "));
	cout << endl;
	va.swap(vb);
	copy(va.begin(),va.end(),ostream_iterator<double>(cout, " "));
	cout << endl;
	copy(vb.begin(),vb.end(),ostream_iterator<double>(cout, " "));
	cout << endl;
	cout << *find(va.begin(),va.end(),4.4);
	cout << endl;
}
