#include <iostream>
using namespace std;
class A{
	public :
		void func(){ cout << "a.func()" << endl;}
};
class B{
	public :
		void func(){ cout << "b.func()" << endl;}
		void gunc(){ cout << "b.gunc()" << endl;}
};
class C :public A, public B{
	public :
		void gunc(){ cout << "c.gunc()" << endl;}
		void hunc(){ A::func();}// 使用作用域运算符避免二义行
};
int main(){
	C c;
	c.gunc();
	c.hunc();
}
