#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <iterator>
using namespace std;
int main(){
	double a[] = {1.1,4.4,3.3,2.2};
	vector<double> va(a, a+4), vb(4);	
	typedef vector<double> :: iterator iterator;
	iterator first  = va.begin(); 
	for(first; first < va.end(); first++ ){
		cout << *first << " ";
	}
	for(--first; first > va.begin() - 1; first--){
		cout << *first << " ";  
	}
	copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
	cout << endl;
	typedef vector<double> :: reverse_iterator reverse_iterator;
	reverse_iterator last = va.rbegin();
	for(last; last < va.rend(); last++ )
		cout << *last << " ";
	for(--last; last > va.rbegin() - 1; last--)
		cout << *last << " ";
	copy(va.rbegin(),va.rend(),ostream_iterator<double>(cout," "));
	cout << endl; 
}
