#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <iterator>
using namespace std; 
int main(){
	vector<char> a(10), b(10);
	cout << a.empty() << " , " << sizeof(a) << " , ";
	char i = 'a', j = 0;
	for(; j < 10; j++ ){
		a[j] = i + j;	
	}
	cout << a.max_size() << " , " << a.capacity() << " , " << a.size() << endl;
	for(j = 0; j < 10 ; j++ ){
		cout << a[j] << " ";	
	}	
	cout << endl;
	copy(a.begin(), a.end(),b.begin());
	copy(a.begin(),a.end(),ostream_iterator<char>(cout," " ));
	cout << endl;
	reverse_copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
	cout << endl;
	cout << a.front() << " , " << a.back() << " , " << a.operator[](5) << endl;
	sort(b.begin(),b.end(),greater<char>());
	copy(b.begin(),b.end(),ostream_iterator<char>(cout," " ));
	cout << endl;	
}
