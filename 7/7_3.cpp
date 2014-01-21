#include <iostream>
using namespace std;
template <class T, int size = 4 >
class Sum{
		T m[size];
	public : 
		Sum(T a, T b, T c, T d ){ m[0] = a; m[1] = b; m[2] = c; m[3] = d;}
		T s(){ return m[0] + m[1] + m[2] + m[3]; }
};
int main(){
	Sum<int,4> num1(23,45,67,78);
	Sum<float,4> f1(3.5f,-8.5f,8.8f,9.7f);
	Sum<double,4 > dl(33.4,66.7,67.8,123.6);
	Sum<char,4> c1('w',-2,-1,-1);
	cout << num1.s() << " , " << f1.s() << " , " << dl.s() << " , " << c1.s() << endl; 
}
