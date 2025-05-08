#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
/*Question2: Movie Ticket Price Calculator with Seat Selection 
Create a program that determines the price of movie tickets 
based on age, time of the movie, and seat selection. 
The program should ask the user for their age, the time of the movie 
(in 24-hour format), and the type of seat (standard, VIP, or premium).
For ages 0-5 and 65+, tickets are free. For ages 6-12, tickets are 
500 pkr. For ages 13-64, tickets are 1000 pkr. Additionally,
if the movie is scheduled before 5:00 PM, there's a 200 pkr discount 
on each ticket. For VIP seats, there's a 500 pkr surcharge, 
and for premium seats, there's a 1000 surcharge.*/

int age,time,option,seat,totalbill;
int standard1=500,standard2=1000,vip=500,premium=1000;


  cout<<"_________________________________________________"<<endl;
  cout<<"___________Welcome to the Movie Theater__________"<<endl;
  
  do{
  cout<<"Please enter your Age: ";
  cin>>age;

  
  if(age>=0 && age<=5 || age>=65){
  	
  cout<<"Congratulations! you recieved a free ticket"<<endl;
 
  
}else if (age>=6 && age<=12){
 
 
  cout<<"Which type of seat do you want to purchase?"<<endl;
  cout<<"1:"<< setw(10) <<"Standard"<<endl;
  cout<<"2:"<< setw(5) <<"VIP"<<endl;
  cout<<"3:"<< setw(9) <<"Premium"<<endl;
  cin>>seat;
 
 while(seat<=0 || seat>=4){
 	
 	cout<<"Please enter valid seat type: ";
	cin>>seat;
 	
 }
 
 switch(seat){
 	
 	case 1:
 	totalbill=standard1;
 	cout<<"You have purchased Standard ticket"<<endl;
 	cout<<"Your total bill is: "<<totalbill<<endl;
 	break;
 	
 	case 2:
 	totalbill=standard1+vip;
 	cout<<"You have purchased VIP ticket"<<endl;
 	cout<<"Your total bill is: "<<totalbill<<endl;
 	break;
 	
 	case 3:
 	totalbill=standard1+premium;	
 	cout<<"You have purchased Premium ticket"<<endl;
 	cout<<"Your total bill is: "<<totalbill<<endl;
 	break;
 	
 
 }
    
	
}else if (age>=13 && age<=64){
	 	 
  cout<<"Which type of seat do you want to purchase?"<<endl;
  cout<<"1:"<< setw(10) <<"Standard"<<endl;
  cout<<"2:"<< setw(5) <<"VIP"<<endl;
  cout<<"3:"<< setw(9) <<"Premium"<<endl;
  cin>>seat;

while(seat<=0 || seat>=3){
	
	cout<<"Please enter valid seat type: ";
	cin>>seat;
}

 switch(seat){ 
 	
 	case 1:
 	totalbill=standard2;
 	cout<<"You have purchased Standard ticket"<<endl;
 	cout<<"Your total bill is: "<<totalbill<<endl;
 	break;
 	
 	case 2:
 	totalbill=standard2+vip;	
 	cout<<"You have purchased VIP ticket"<<endl;
 	cout<<"Your total bill is: "<<totalbill<<endl;
 	break;
 	
 	case 3:
 	totalbill=standard2+premium;		
 	cout<<"You have purchased Premium ticket"<<endl;
 	cout<<"Your total bill is: "<<totalbill<<endl;
 	break;

}
 }else{
	
	cout<<"Please enter Valid Age"<<endl;
	cin>>age;
 }
	
	cout << "Please Enter Time (24-hour format): ";
    cin >> time;

	if (time < 17) {
           
            totalbill -= 200;
            
            cout<<"Your total bill is: "<<totalbill<<endl;
            
        } 
	
	
	cout<<"Do you want to purchase another ticket, press any number or 0 to exit the program: ";
    cin>>option;
   
}while(option!=0);
	
	
	
	
	
	return 0;
}