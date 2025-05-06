#include <iostream>
using namespace std;
	
	void even(int a){
		if(a%2!=0){
			cout<<"Your number is an odd number"<<endl;
		}
		else{
			cout<<"Your number is an even number"<<endl;
		}
	}
	
	int main(){
		
	int a;
	
	cout<<"Enter a number"<<endl;
	cin>>a;
	
	even(a);
	
	}
	