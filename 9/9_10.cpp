#include <iostream>
#include <fstream>	
using namespace std;
struct list{
	double salary;
	char name[20];
	friend ostream &operator << (ostream &os,list &ob);
	friend istream &operator >> (istream &is,list &ob);
};
istream & operator >>(istream &is,list &ob){
	is >> ob.name;
	is >> ob.salary;
	return is;
}
ostream &operator <<(ostream &os,list &ob){
	os << ob.name << " ";
	os << ob.salary << " ";
	return os;
}
int main(){
	list worker1[2] = {{1234,"LiMing"},{3456,"ZhuangHong"}},worker2[2];	
	ofstream out("pay.txt",ios::binary); 
	if(!out){
		cout << "没有正确建立文件,结束运行" << endl;
		return 1;
	}
	int i;
	for(i = 0; i < 2; i++){
		out << worker1[i];
	}
	out.close();
	ifstream in("pay.txt",ios::binary);
	if(!in){
		cout << "没有 正确建立文件，运行结束" << endl;
		return 1;
	}
	for(i = 0; i < 2; i++){
		in >> worker2[i];
		cout << worker2[i] << endl;
	}
	in.close();
}
