//Problem Description:
/*You are tasked with developing a Tip Calculator program in C++. 
The program will prompt the user to enter the total bill amount and 
the desired tip percentage. It will then calculate and display the
 total amount to be paid, including the tip.

Requirements:
Prompt the user to enter the total bill amount and the desired tip percentage.
Calculate the tip amount based on the bill amount and tip percentage.
Add the tip amount to the bill amount to calculate the total amount to be paid.
Display the total amount to be paid, including the tip.
assptionally, implement error handling to ensure valid input
 (e.g., non-negative bill amount, valid tip percentage)*/
    
    
#include <iostream>
using namespace std;

int main(){
	
	//Tip calculator program
	
	int billamount,totalbill,option ;
	double tip,tipamount;
	
	cout<<"|      Welcome to my Restaurant      |"<<endl;
	do{
	cout<<"|      What is your bill amount?     |"<<endl;
	cin>>billamount;
	
	    while(billamount<=0){
		cout<<"|     Please Enter valid Bill amount.    |"<<endl;
	    cin>>billamount;
	}
	
	cout<<"|      How much would you like to tip? (enter in percentage pls)    |"<<endl;
	cin>>tip;
	

	
	while(tip<=0){
	    cout<<"|     PLease enter Valid Tip Amount.     |"<<endl;
    	cin>>tip;
}

	tipamount= billamount*tip/100 ;
	totalbill = billamount + tipamount;
	
	cout<<"|    Your tip amount was:      $    "<<tipamount<<"|"<<endl;
	cout<<"|    Your Total bill amount is:$   "<<totalbill<<"|"<<endl;
	cout<<"|    Thank you for purchasing!         |"<<endl;
	cout<<endl;
	cout<<"|    Would you like to try again?             "<<"|"<<endl;
	cout<<"|    Press any number or 0 to quit the program"<<"|"<<endl;
	cin>>option;
	
  }while(option!=0);
	
	

	
	return 0;
}