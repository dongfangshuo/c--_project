#include <iostream>
using namespace std;
class Two{
		int y;
	public :
		friend class One;
};
class One{
		int x;
	public :
		One(int a, Two &r, int b);
		void display(Two &r);	
};
One :: One(int a ,Two &r, int b){
	x = a;
	r.y = b;
}
void One :: display(Two &r){
	cout << x << " " << r.y << endl;
}
int main(){
	Two obj2;
	One obj1(23,obj2,55);
	obj1.display(obj2);
}
