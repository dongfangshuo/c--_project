#include <iostream>
using namespace std;
class Two;
class One{
	private :
		int x;
	public  :
		One(int a){ x = a;}
		int getX(){ return x;}
		void func(Two&);
};
class Two{
	private :
		int x;
	public  :
		Two(int a){ x = a;}
		int getX(){ return x;}
		friend void One :: func(Two&);
};
void One :: func(Two &t){
	t.x = x;
}
int main(){
	One obj1(5);
	Two obj2(8);
	cout << obj1.getX() << "  " << obj2.getX() << endl;
	obj1.func(obj2);
	cout << obj1.getX() << "  " << obj2.getX() << endl;
}
