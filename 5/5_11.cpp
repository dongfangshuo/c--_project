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
	Test *one[2] = {new Test(2) , new Test(4)}; 
	Test *two[2] = { new Test(34.6,23.6), new Test(12.4,56.8)}; 
	for(int i = 0; i < 2; i++){
		cout << "one[" << i << "] = " << one[i]->getNum() << endl;
	}
	for(int i = 0; i < 2; i++ ){
		cout << "two[" << i << "] = (" << two[i]->getNum() << " , " << two[i]->getF() << ")" <<  endl;
	}
}
