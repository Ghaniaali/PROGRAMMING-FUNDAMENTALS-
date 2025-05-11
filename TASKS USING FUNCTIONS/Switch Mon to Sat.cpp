//Use the switch statement to ask user to input number
//of week's day (1-7) and translate to its equivalent
//name of the day of the week (e.g., 1 to Sunday, 
//2 to Monday, ...., 7 to Saturday).
//Sample Output
//Enter the number of week’s day: 4
//Wednesday

#include <iostream>
using namespace std;

int main(){
	
	int num;
	
	cout<<"Enter the number of weeks day: ";
	cin>>num;
	
	
	switch(num){
		
	case 1:
	cout<<"Sunday"<<endl;
	break;
	
	case 2:
	cout<<"Monday"<<endl;
	break;
	
	case 3:
	cout<<"Tuesday"<<endl;
	break;
	
	case 4:
	cout<<"Wednesday"<<endl;
	break;
	
	case 5:
	cout<<"Thursday"<<endl;
	break;
	
	case 6:
	cout<<"Friday"<<endl;
	break;
	
	case 7:
	cout<<"Saturday"<<endl;
	break;
		
	default:
		cout<<"Invalid Input"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}