#include <iostream>
using namespace std;
class test{
	private :
		int x,y;
	public  :
		test(){}
		test(int a, int b){ x = a; y = b;}
		void show();
};
void test :: show(){
	cout << "x : " << x << " y :" << y << endl;
}
int main(){
	test two[2] = {test(4,6),test(6,7)};
	test *p = two;
	int kk[] = {34,34,34,56};
	int *l = kk;
	for(int i =0; i < 2; i++){
//		delete two[i];
//		delete p;
	}
	delete []p;
}

