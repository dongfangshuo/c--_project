#include <iostream>
#include <string>
using namespace std;
int isnumber(char c) { return c >= '0' && c <= '9' ? 1 : 0;}
int main(){
	char c;
	cin >> c;
	if(isnumber(c)) cout << "you entered a digit";
	else cout << " you entered a non-digit";
	cout << endl;
}
