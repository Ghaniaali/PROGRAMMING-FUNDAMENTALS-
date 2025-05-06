#include<iostream>
using namespace std;


int sum(int a,int b){
	
	return a+b;
	
}
int main(){
	
	int num1,num2;
	
	cout<<"Enter two Numbers to add"<<endl;
	cin>>num1>>num2;
	
	cout<<"The sum of two numbers are: "<<sum(num1,num2);
	
	
	
	
	
	return 0;
}