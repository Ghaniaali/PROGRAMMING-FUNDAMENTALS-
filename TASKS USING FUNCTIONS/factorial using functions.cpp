#include<iostream>
using namespace std;

int factorial(int n){
	 if (n==0){
	 
	 return 1;
}
	 else{
	 	return n*factorial(n-1);
	 }
	 
}

int main(){
	
	int a,result;
	
	cout<<"Enter a number: "<<endl;
	cin>>a;
	
	result= factorial(a);
	cout<<"The factorial of "<<a<<" is "<<result;
	
	
	
	
	
	
	return 0;
	
	
	
}