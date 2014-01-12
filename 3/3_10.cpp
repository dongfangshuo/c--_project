#include <iostream>
#include <string>
using namespace std;
string input(const int);
int main(){
	int n;
	cout << "please input number:";
	cin >> n;
	cout << "the number is " << n << endl;
	string s = input(n);
	cout << s << endl;
}
string input(const int n){
	string s1,s2;	
	for(int i = 0; i < n; i++){
		cin >> s1 ;
		s2 = s2 + s1 + " ";
	}
	return s2;
}
