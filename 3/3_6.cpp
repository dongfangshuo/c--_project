#include <iostream>
#include <string>
using namespace std;
void display(string s1, string s2 = "", string s3 = "");
int main(){
	string s1("now"),s2("before"),s3("freture");
	display(s1);
	display(s1,s2,s3);
	display(s3,s1);
	display(s2,s3);
}
void display(string s1,string s2,string s3){
	if(s3 == "" && s2 == "") cout << s1 << endl;	
	else if(s3 == "" && s2 != "" ) cout << s1 << " , " << s2 << endl;
	else cout << s1 << " , " << s2 << " , " << s3 << endl;
}
