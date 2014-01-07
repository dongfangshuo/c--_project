#include <iostream>
#include <string>
#include <iterator>
using namespace std;
void swap(string str1, string str2);
int main(){
	string str1(" now "),str2(" before ");	
	swap(str1,str2);
	cout << "after swap:str1 " << str1 << " str2 :" << str2 << endl;
}
void swap(string s1, string s2){
	string temp = s1; s1 = s2; s2 = temp;	
	cout << " swap:str1 " << s1 << " str2 :" << s2 << endl;
}
