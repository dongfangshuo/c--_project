#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main(){
	char ch[15], *p = "abcdefg"; 
	ofstream myFile;
	myFile.open("text.txt");
	myFile << p;
	myFile << "GoodBye!";
	myFile.close();
	ifstream getText("text.txt"); 
	int i;
	for(i = 0; i < strlen(p) + 8; i++){
		getText >> ch[i];
	}
	ch[i] = '\0';
	getText.close();
	cout << ch << endl;
}

