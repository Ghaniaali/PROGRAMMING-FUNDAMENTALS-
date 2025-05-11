#include<iostream>
using namespace std;

int main(){

int num;

     cout<<"Please Enter a two digit number: ";
	 cin>>num;
	 
	 while(num<=10 || num>=99){
	 	
	 	cout<<"Enter a two digit number only: ";
	 	cin>>num;
	 }	
	
int	firstdigit= num/10;
int	lastdigit= num%10;
	
int	sum=firstdigit+lastdigit;

     cout<<"The sum is= "<<sum;
	
	
	

	
	return 0;
}