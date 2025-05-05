#include<iostream>
using namespace std;

double add(double n1,double n2){
	return n1+n2;
}
double sub(double n1,double n2){
	return n1-n2;
}
double mul(double n1,double n2){
	return n1*n2;
}
double div(double n1,double n2){
	return n1/n2;
}

int main(){
	
	double n1,n2,choice;
	char operation;
	
	do{
	cout<<"|******Simple Calculator*****|"<<endl;
	cout<<"|****************************|"<<endl;
	cout<<"|**Enter your First Number:**|"<<endl;
	cin>>n1;
	cout<<"|**Enter your Second Number:*|"<<endl;
	cin>>n2;
	cout<<"|*Enter the Operation you want to perform*|"<<endl;
	cout<<"|1) + addition                            |"<<endl;
	cout<<"|2) - Subtraction                         |"<<endl;
	cout<<"|3) * Multiplication                      |"<<endl;
	cout<<"|4) / Division                            |"<<endl;
	cin>>operation;
	
	
	switch(operation){
		
		case '+':
		cout<<"The Result is: "<<add(n1,n2)<<endl;
		break;
		
		case '-':
		cout<<"The Result is: "<<sub(n1,n2)<<endl;
		break;
		
		case '*':
		cout<<"The Result is: "<<mul(n1,n2)<<endl;
		break;
		
		case '/':
			if(n2 !=0){
		cout<<"The Result is: "<<div(n1,n2)<<endl;
	} else {
		cout<<"Division of"<<n1<<"is not possible with zero"<<endl;
	}  
	    break;
	    
	    default:
	    	cout<<"Please enter Valid operation"<<endl;
	    	
	   	}
	   	
	cout<<"Do you want to try again? press any number to continue or 0 to exit the program:";
	cin>>choice;
	
	}while(choice != 0);
	
 return 0;	
}
