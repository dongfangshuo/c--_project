#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
	string str[] = {"We are here !","Where are you ? ","welcome !"};	
	int i;	
	for(i = 0; i < 3; i++) {
		copy(str[i].begin(),str[i].end(), ostream_iterator<char>(cout));
		cout << endl; 
	}
	str[0].swap(str[2]);
	str[0].swap(str[1]);
	for(i = 0; i < 3; i++) {
		cout << str[i] << endl;	
	}
}
