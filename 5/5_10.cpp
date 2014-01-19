#include <iostream>
using namespace std;
class Test{
		int num;
		double f1;
	public :
		Test(int n){ num = n;}		
		Test(int n, double f){ num = n; f1 = f;} 
		int getNum(){ return num;}
		double getF(){ return f1;}	
};	
int main(){
	Test one[2] = {2,4},*p;
	Test two[2] = {Test(2,4.5),Test(6,7.8)};	
	for(int i = 0; i < 2; i++){
		cout << "one[" << i << "] = " << one[i].getNum() << endl;
	}
	p = two; 
	for(int i = 0; i < 2; i++,p++ ){
		cout << "two[" << i << "] = (" << p->getNum() << " , " << p->getF() << ")" <<  endl;
	}
}
