#include <iostream>
using namespace std; 
template <class T>
class KK{
		T x,y;
	public :
		KK(T a, T b):x(a),y(b){}
		T getX(){ return x;}
		T getY(){ return y;}
	
};
int main(){
	KK<int> l(34,45);
	cout << "x = " << l.getX() << endl;
}
