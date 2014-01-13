#include <iostream>
using namespace std;
char up(char);
int main(){
	char c;
	cout << "please input a char:";
	cin >> c;
	c = up(c);
	cout << c << endl;
}
char up(char c){
	if(c >= 'a' && c <= 'z' ){
		return c + ('A' - 'a');	
	}
	return c;
}
