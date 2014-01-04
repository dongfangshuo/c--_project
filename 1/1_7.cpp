#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;
int main(){
	double a[] = {1.1, 4.4, 3.3, 2.2};	
	cout << "origin data" << endl;
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
	cout << "default sort" << endl;
	sort(a, a + 4);
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
	cout << "xiangfan sort " << endl;
	sort(a, a + 4, greater<double>());
	copy(a, a + 4, ostream_iterator<double>(cout, " "));
	cout << endl;
	double * d = find(a, a + 4, 4.4);
	if(d == a + 4){
		cout << " not exist";	
	}else{
		cout << "the num  4.4 is exist";	
	}
	cout << endl;
	d = find(a, a + 4, 8);
	if(d == a + 4)  cout << "not exist";
	else cout << "exist" << *d;	
	cout << endl;
}
