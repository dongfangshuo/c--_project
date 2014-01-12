#include <iostream>
#include <string>
using namespace std;
void change(const string&);
int main(){
	string str("can you change it ?");	
	change(str);
	cout << str << endl;
}
void change(const string& s){
	string s2 = s + " No !";
	cout << s2 << endl;
///	s = s + "kkkkkkkk"; error
}
