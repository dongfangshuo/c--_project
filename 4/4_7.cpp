#include <iostream>
using namespace std;
class Point{
	private :
		int x,y; 
	public :
		Point(int = 0, int = 0);
};
Point :: Point(int a, int b) :x(a),y(b){
	cout << " init " << a << " , " << b << endl;
}
int main(){
	Point a;
	Point b(23,34);
	Point c[2];
}
