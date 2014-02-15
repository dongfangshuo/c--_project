#include <iostream>
using namespace std;
class shape{
	public :
		virtual double area() = 0;
};
class square : public shape{
	protected :
		double h;
	public :
		square(double i){ h = i;}
		double area(){ return h * h;}
}; 
class circle : public square{	
	public :
		circle(double r):square(r){}
		double area(){ return h * h * 3.14159;}
};
class triangle : public square{
	protected :
		double w;
	public :
		triangle(double i,double j):square(i){ w = j;}
		double area(){ return h * w * 0.5;}
};
class rectangle : public triangle{
	public :
		rectangle(double i,double j):triangle(i,j){}
		double area(){return h * w;}
};
double total(shape *s[],int n){
	double sum = 0.0;
	for(int i = 0; i < n; i++){
		sum += s[i]->area();
	}
	return sum;
}
int main(){
	shape *s[5];
	s[0] = new square(4);
	s[1] = new triangle(3,6);
	s[2] = new circle(10);
	s[3] = new rectangle(3,6);
	s[4] = new square(6); 
	for(int i = 0; i < 5; i++ ){
		cout << "s[" << i << "] = " << s[i] -> area() << endl;	
	}
	double sum = total(s,5);
	cout << "The total area is " << sum << endl;
}

