#include <iostream>
using namespace std;
const double PI = 3.141592;	
int main(){
	int a = 15;
	cout.setf(ios_base::showpoint); 
	cout << 123.0 << " ";
	cout.unsetf(ios_base::showpoint); 
	cout << 123.0 << endl;
	cout.setf(ios_base::showbase); 
	cout.setf(ios_base::hex,ios_base::basefield);
	cout << a << " " << uppercase << hex << a << " " << nouppercase << hex << a << " " << noshowbase << a << dec << " " << a << endl; 
	
}
