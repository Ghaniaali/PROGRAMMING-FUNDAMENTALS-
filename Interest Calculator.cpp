/*Problem Description:
You are tasked with developing a Simple Interest Calculator program in C++. 
The program should take input for the principal amount, interest rate,
 and time period (in years) from the user. It should then calculate and 
 display the simple interest for each year within the given time period.

Requirements:

    Use loops to calculate the simple interest for each year within the given time period.
    Implement error handling to ensure that the user enters valid input
	(i.e., principal amount should be positive, interest rate should be non-negative, and 
	time period should be a positive integer).
    Calculate the simple interest using the formula: 
	Simple Interest = (Principal Amount * Interest Rate * Time) / 100.
    Display the simple interest for each year along with the total
	interest earned at the end of the time period.
    Use appropriate loop constructs such as for loops or while loops depending on your preference.*/
    
#include<iostream>
using namespace std;

int main(){

double principleamount,interest_rate,time,simpleinterest,option,totalinterest;
do{

  cout<<"Enter The principle amount: ";
  cin>>principleamount;
  
  while(principleamount<=0){
  	cout<<"please enter postive amount: ";
  	cin>>principleamount;
  }
  
  cout<<"Enter The Interest rate: ";
  cin>>interest_rate;
  
   while(interest_rate<=0){
  	cout<<"please enter positive interest rate ";
  	cin>>interest_rate;
  }
  
  cout<<"Enter The Time period in years: ";
  cin>>time;
  
   while(time<=0){
  	cout<<"please enter positive time period ";
  	cin>>time;
  }

for(int i=1; i<=time; ++i){
	simpleinterest = (principleamount * interest_rate * i) / 100;
	 totalinterest += simpleinterest;
            cout << "| Year " << i << ": $" << simpleinterest << " |" << endl;
        }

        cout << "| Total interest earned at the end of " << time << " years: $" << totalinterest << " |" << endl;
        cout << "| Would you like to calculate interest again? (Press any number or 0 to quit) |" << endl;
        cin >> option;
    } while (option != 0);
    
    
    return 0;
    
}
