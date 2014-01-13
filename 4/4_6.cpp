#include "4_1.cpp" 
using namespace std;
int main(){
	Point *p1 = new Point(); 
	Point *p2 = new Point(5,6);	
	delete p1;
	delete p2;
}
