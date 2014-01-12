#include <iostream>
#include <string>
#include <complex>
using namespace std;
template <class T>
void printer(complex<T> a){ // 这个方法必须放到template后面，否则如果放在main后面会出错
	string str1("real is "),str2("image is ");	
	cout << str1 << a.real() << " , " << str2 << a.imag() << endl;
}
int main(){
	int i = 0;
	complex<int> num1(2,4);
	complex<double> num2(2.5,5.6);
	printer(num1);	
	printer(num2);
}
