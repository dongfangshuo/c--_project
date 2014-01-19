#include <iostream>
using namespace std;
class object{
	private :
		int val;
	public  :
		object():val(0){
			cout << "default construct for object" << endl;
		}	
		object(int i):val(i){
			cout << "construct for object" << val << endl;
		} 
		~object(){
			cout << "destruct for object" << val <<  endl;
		}
		
};
class container{
	private :
		object one;
		object two;
		int data;
	public  :
		container():data(0){
			cout << " default construct for container " << endl;
		} 
		container(int i, int j, int k);
		~container(){
			cout << " destruct for container" << data << endl;	
		}
};
container :: container(int i, int j, int k):two(i),one(j){
	data = k;	
	cout << " construct for container " << data << endl;
} 
int main(){
	container obj,otherObj(23,26,56);
}
