#include <iostream>
#include <string>
using namespace std;
int main(){
	cout << "Enter the date in American format " << "(e.g., December 12 , 2003)" << endl;
	string date;
	getline(cin,date,'\n');
	int i = date.find(" ");
	string mouth = date.substr(0,i);
	int k = date.find(',');
	string day = date.substr(i + 1,k - i -1);
	string year = date.substr(k + 1,4); 
	string newDate = day + ' ' + mouth + ' ' + year;
	cout << "Original: " << date << endl;
	cout << "Converted: " << newDate << endl;
}
