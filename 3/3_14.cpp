#include <iostream>
using namespace std;
template <class T>
T max(T x1, T x2){
	return x1 > x2 ? x1 : x2;
}
int main(){
	using ::max;//指定命名空间,要不然会报错
	cout << max(2,4) << '\t' << max(4.0,5.7) << '\t' << max('h','y') << '\t' << max("sdfbs","dgj") << endl;
}
