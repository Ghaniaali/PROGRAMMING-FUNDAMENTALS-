//Question 2: Advanced Library Fine Calculator
//Write a program that calculates the fine for overdue
//library books with varying fine rates for different 
//categories of books. The program should ask the user
//for the number of days the book is overdue and the
//type of book (e.g., regular, reference, rare).
//If the book is returned within 7 days of the due date,
//there is no fine. If it's returned between 8 and 14 days late,
//the fine is $0.50 per day. If it's returned more than
//14 days late, the fine is $1.00 per day. Additionally,
//for reference books, the fine rates are doubled, and
//for rare books, the fine rates are tripled
 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int overdue,totalfine1,totalfine2,booktype;

       cout<<"______Welcome to my Library______"<<endl;
       cout<<"Please enter the number of days your book is Overdued: ";
       cin>>overdue;
       
       while(overdue<=0){
       	
       	 cout<<"Please Enter valid date"<<endl;
       	 cin>>overdue;
	   }

    if (overdue<=7){
    	
    	cout<<"There is no fine, hope you enjoyed your book!"<<endl;
	}
    else if (overdue>=8 && overdue<=14){
    	
        totalfine1= 0.50*overdue;
        cout<<"Your total amount of Fine is: $"<<totalfine1<<endl;
        
        cout<<"Enter your book type: "<<endl;
        cout<<"1"<<setw(13)<<"Regular"<<endl;
        cout<<"2"<<setw(15)<<"Reference"<<endl;
        cout<<"3"<<setw(10)<<"Rare"<<endl;
        cin>> booktype;
        
        while (booktype<=0 && booktype>=3){
        	
        	cout<<"Please enter valid Book type number: ";
        	cin>>booktype;
		}
        
        switch(booktype){
        	case 1:
        	
        	cout<<"Your book type is regular,so no extra charges for you. Have a nice day!"<<endl;
        	cout<<"Your total amount of fine is: $"<<totalfine1<<endl;
        	
        	break;
        	
        	case 2:
        	totalfine1*=2;	
        	cout<<"Your book type is reference, So double charges are applied"<<endl;
        	cout<<"Your total amount of fine is: $"<<totalfine1<<endl;
        	
        	break;
        	
        	case 3:
        	totalfine1*=3;
        	cout<<"Your book type is rare, so triple charges are applied!"<<endl;
        	cout<<"Your total amount of fine is: $"<<totalfine1<<endl;
        	
        	break;
        	
		}
	}
	else if (overdue>=14){
		
		totalfine2= 1.00*overdue;
        cout<<"Your total amount of Fine is: $"<<totalfine2<<endl;
        
        cout<<"Enter your book type: "<<endl;
        cout<<"1"<<setw(13)<<"Regular"<<endl;
        cout<<"2"<<setw(15)<<"Reference"<<endl;
        cout<<"3"<<setw(10)<<"Rare"<<endl;
        cin>> booktype;
        
        while (booktype<=0 && booktype>=3){
        	
        	cout<<"Please enter valid Book type number: ";
        	cin>>booktype;
		}
        
        switch(booktype){
        	case 1:
        	
        	cout<<"Your book type is regular,so no extra charges for you. Have a nice day!"<<endl;
        	cout<<"Your total amount of fine is: $"<<totalfine2<<endl;
        	
        	break;
        	
        	case 2:
        	totalfine2*=2;	
        	cout<<"Your book type is reference, So double charges are applied"<<endl;
        	cout<<"Your total amount of fine is: $"<<totalfine2<<endl;
        	
        	break;
        	
        	case 3:
        	totalfine2*=3;
        	cout<<"Your book type is rare, so triple charges are applied!"<<endl;
        	cout<<"Your total amount of fine is: $"<<totalfine2<<endl;
        	
        	break;
        	
		}
		
		
		
	}











return 0;

}
