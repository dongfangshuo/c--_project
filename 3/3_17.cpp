#include <iostream>
#include <string>
using namespace std;
template <typename T>
T max(T m1, T m2){
	return m1 > m2 ? m1 : m2;
}
template <typename T>
T min(T m1, T m2){
	return m1 < m2 ? m1 : m2;
}
int main(){
	using ::max;	
	using ::min;
	cout << max("ABC","ABD") << " , " << min("ABC","ABD") << " , "  << min('E','R') << " , " << min(2.0,5.) << endl;
	cout << '\t' << min<double>(8.5,6) << " , " << min(8.5,(double)6) << " , "  << max((int)8.5,6) << endl; 
	cout << '\t' << min<int>(2.3,5.8) << " , " << max<int>('a','y') << " , " << max<char>(95,121) << endl;
}
