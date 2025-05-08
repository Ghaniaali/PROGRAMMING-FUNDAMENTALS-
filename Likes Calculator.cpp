#include <iostream>
using namespace std;

int main(){
	
	int option,postid,postlike=0,postshare=0,postcomment=0,postcount=0,avglike,engrate,popularpost,maxeng=0;

  do{ 	
  cout<<"______________________________"<<endl;
  cout<<"______welcome to postgram_____"<<endl;
  cout<<"___please select one option___"<<endl;
  cout<<"______1: Add a new post_______"<<endl;
  cout<<"______2: Analyze posts _______"<<endl;                                 
  cout<<"______3: Exit          _______"<<endl;
  cin>>option;
  
  switch(option){
  case 1:
  	do{
  	cout<<" Enter the Post ID: ";
  	cin>>postid;
  	postcount++;
  	
    cout<<" Enter the Number of likes: ";
    cin>>postlike;
    
    cout<<" Enter the Number of Comments: ";
    cin>>postcomment;
    
    cout<<" Enter the Number of shares: ";
    cin>>postshare;
  	
  	cout<<"Do you want to add a new post? press 1. press any number to continue or 3 to exit? : ";
  	cin>>option;
  	
  }while(option==1);
  
  break;	

    case 2:	
	
	avglike=postlike/postcount;
	engrate=(postlike+postcomment+postshare);
	 if(engrate>maxeng){
     maxeng=engrate;
     popularpost=postid;
}
	cout<<" Average likes per post: "<<avglike<<endl;
	cout<<" Engagement rate per post: "<<engrate<<endl;
	cout<<" Most popular post: "<<popularpost<<endl; 
	
	cout<<"Do you want to Continue, press any number or press 3 to exit"<<endl;
	cin>>option;
	
	break;

    case 3:
    cout<<"Do you want to exit the program? press 3 again to exit"<<endl;
    cin>>option; 
    
    break;
      
    default:
	cout<<"Invalid Option, Enter 1,2 or 3"<<endl;
	cin>>option;
	
	continue;
}

}while(option!=3);

     return 0; 	
	 
	 }
