#include <iostream>
using namespace std;
class test{
	private :
		int n;
	public  :	
		test(int i){ n = i; cout << " construct " << i << endl; }
		~test(){ cout << " desstruct " << n <<  endl;}
		int getN(){ return n;}
		void inc(){ ++n;}
};
int main(){
	cout << "loop start :" << endl; 
	for(int i = 0; i < 3; i++){
		static test a(3);
		test b(3);
		a.inc();
		b.inc();
		cout << "a.n = " << a.getN() << endl; 
		cout << "b.n = " << b.getN() << endl;
		cout << "loop end " << endl;		
		cout << "exit main" << endl;		
	}
}
