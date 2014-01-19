#include <iostream>
using namespace std;
class Base{
	private :
		double x,y;
		const double p;
	public  :
		Base(double m, double n, double d):p(d){
			x = m;
			y = n; 
		}
		void show();
		void show() const;
};	
void Base :: show(){
	cout << x << " , " << y << " ,p =  " << p << endl; 
}
void Base :: show() const{
	cout << x << " , " << y << " ,const p =  " << p << endl; 
} 
int main(){
	Base a(23.5,45.7,56.8);
	const Base b(12.4,67.9,76.9);
	b.show();
	a.show();
}
