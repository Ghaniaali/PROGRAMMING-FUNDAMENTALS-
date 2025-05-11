#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"Enter first Integer: ";
	cin>>a;
	cout<<"Enter second Integer: ";
	cin>>b;
	
	cout<<"Before exchange A= "<<a<<" and B= "<<b<<endl;
	
	a= a+b;
	b= a-b;
	a= a-b;
	
	cout<<"After exchange A= "<<a<<" and B= "<<b<<endl;

 return 0;

}
	
