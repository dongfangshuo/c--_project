#include <iostream>
using namespace std;
int main(){
	string str1("hello");	
	string str2 = "world";
	cout << str1[0] << str1 << endl;
	cout << str2[0] << str2 << endl;
	cout << "please input a word :";
	cin >> str1; 
	cout << "length of the " << str1 << " is " << str1.size() << endl; 
}
