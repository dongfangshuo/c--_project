#include <iostream>
using namespace std;
template <class T>
class Max4{
		T a,b,c,d;
		T max( T a, T b){ return a > b ? a : b;}
	public :
		Max4(T,T,T,T);
		T max(void);
};
template <class T>
Max4<T> :: Max4(T x1, T x2, T x3, T x4):a(x1),b(x2),c(x3),d(x4){}
template <class T>
T Max4<T> :: max(void){
	return  max(max(a,b),max(c,d));
} 
int main(){
	Max4<char> c('W','w','a','A');
	Max4<int> A(-25,-56,-67,-45);	
	Max4<double> B(12.5,34.7,45.7,67.9);
	cout << c.max() << " " << A.max() << " " << B.max() << endl; 

}
	
