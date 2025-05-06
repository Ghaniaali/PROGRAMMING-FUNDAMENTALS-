#include<iostream>
using namespace std;

void swap(int* a, int* b){
	int temp= *a;
	*a=*b;
	*b=temp;
}

int main(){
	
	int num1,num2;
	
	cout<<"ENTER TWO NUMBERS TO SWAP: "<<endl;
	cin>>num1>>num2;
	
	cout<<"Before swapping "<<num1<<" and "<<num2<<endl;
	
	swap(num1,num2);
	
	cout<<"After swapping "<<num1<<" and "<<num2<<endl;
	
	return 0;
}