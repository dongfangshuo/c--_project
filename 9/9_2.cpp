#include <iostream>//注意
using namespace std;	
class test{
	private :
		int i;
		float f;	
		char ch;
	public :
		test(int a = 0, float b = 0,char c = '\0'){ i = a; f = b; ch = c; }
		friend ostream &operator << (ostream &,test); 
		friend istream &operator >> (istream &,test&);
};
ostream &operator << (ostream &stream,test obj){
	stream << obj.i << ",";
	stream << obj.f << ",";
	stream << obj.ch << ",";
	stream << endl;
	return stream;
}
istream &operator >> (istream &stream,test& obj){
	stream >> obj.i;
	stream >> obj.f;
	stream >> obj.ch;
	return stream;
}
int main(){
	test a(3,6.7,'f');
	operator << (cout , a);
	test b,c;
	cout << "Input ";
	operator >> (cin,b);
	operator >> (cin,c);
	operator << (cout,b);
	operator << (cout,c);
}
