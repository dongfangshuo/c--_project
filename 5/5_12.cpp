#include <iostream>
using namespace std;
class A{
		int val;
	public :
		A(int i){ val = i;}
	        int value(int a){ return val + a;}
};
int main(){
	int (A :: * pfun)(int);
	pfun = &A :: value; // 书上的不正确
	A obj(10);
	cout << (obj.*pfun)(15) << endl;
	A *pc = &obj;
	cout << (pc->*pfun)(15) << endl;
}
