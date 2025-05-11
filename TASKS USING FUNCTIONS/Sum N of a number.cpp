#include <iostream>
using namespace std;

int main(){
	
	int num,num2,sum;
	
	//sum of N number from 1 to any number.
	
	cout<<"Enter the upper Range from 1 to 20"<<endl;
	cin>>num;
	cout<<"Enter the lower Range from 1 to 20"<<endl;
	cin>>num2;
	
    for(int i=num; i<=num2; i++){
    	sum += i;
	}
	
	
	cout<<sum<<endl;

	return 0;
}
