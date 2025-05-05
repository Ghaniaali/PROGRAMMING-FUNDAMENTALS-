#include<iostream>
#include<string>
using namespace std;

struct zoosystem {
	string species;
	int age;
	string healthstatus;
};

void addanimals(zoosystem animal[]){
	
	int a;
	
	cout<<"How many Animals do you want to enter?: "<<endl;
	cin>>a;
	while(a<0 || a>100){
		cout<<"Invalid input, please try again"<<endl;
		cin>>a;
	}
	
	
	for(int i=1;i<=a;i++){
		cout<<"Enter details of the "<<i<<" animal: "<<endl;
		cout<<"Enter specie of the animal:"<<endl;
		cin>>animal[i].species;
		cin.ignore();
		cout<<"Enter age of the animal:"<<endl;
		cin>>animal[i].age;
		cin.ignore();
		cout<<"Enter health status of the animal, good or bad:"<<endl;
		cin>>animal[i].healthstatus;
		cin.ignore();
		
	cout<<"New animal Added to the Zoo list!"<<endl;	
	}
}

void feedanimals(zoosystem animal[]){
	
	string specie;
	int a;
	
	cout<<"How many Animals do you want to feed?: "<<endl;
	cin>>a;
	while(a<0 || a>100){
		cout<<"Invalid input, please try again"<<endl;
		cin>>a;
	}
	cout<<"Enter the Specie of the animal you want to feed"<<endl;
	cin>>specie;
	
	for(int i=1;i<=a;i++)
	if (animal[i].species==specie){
		cout<<"You fed: "<<specie<<endl;
	} else{
	    cout << "Animal not found, please try again." << endl;
        cin>>specie;
    }
}

void healthstatus(zoosystem animal[]){
	  
	  string specie;
	  int a;
	
	cout<<"How many Animals do you want to check?: "<<endl;
	cin>>a;
	while(a<0 || a>100){
		cout<<"Invalid input, please try again"<<endl;
		cin>>a;
	}
	  cout<<"Enter the name of the animal: "<<endl;
	  cin>>specie;
	  
	  for(int i=1;i<=a;i++)
	  if(animal[i].species == specie){
        cout << "Health status of " <<specie<<" is: "<<animal[i].healthstatus<<endl;
        }
        else{
        cout<<"Animal not found, please try again."<<endl;
        cin>>specie;
    }
}

void healthcheck(zoosystem animal[]){
	
	string specie;
	  int a;
	
	cout<<"How many Animals do you want to check?: "<<endl;
	cin>>a;
	while(a<0 || a>100){
		cout<<"Invalid input, please try again"<<endl;
		cin>>a;
	}
	  cout<<"Enter the name of the animal: "<<endl;
	  cin>>specie;
	  
	  for(int i=1;i<=a;i++)
	  if(animal[i].species == specie){
	  	cout<<"Routine health checks for your animal are performed every week"<<endl;
	  	cout<<"The health status is:"<<animal[i].healthstatus<<endl;
        }
        else{
        cout<<"Animal not found, please try again."<<endl;
        cin>>specie;
    }
	
	
}

int main(){
	
	int operation;
	zoosystem animal[10];
	
	cout<<"WELCOME TO VIRTUAL ZOO MANAGEMENT SYSTEM"<<endl;
	do{
	cout<<"Choose an Operation:"<<endl;
	cout<<"| 1) Add a new Animal                    |"<<endl;
	cout<<"| 2) Feed the Animals                    |"<<endl;
	cout<<"| 3) Check health status of animals      |"<<endl;
	cout<<"| 4) Perform routine checkups on animals |"<<endl;
	cout<<"| 5) Exit the Program                    |"<<endl;
	cin>>operation;
	
	while(operation<0 && operation>5){
		cout<<"Please enter Valid operation option: "<<endl;
		cin>>operation;
	}
	
	switch(operation){
		
		case 1:
			addanimals(animal);
                break;
        case 2:
                feedanimals(animal);
                break;
        case 3:
                healthstatus(animal);
                break;
        case 4:
                healthcheck(animal);
                break;
        case 5: 
        cout<<"Exiting the program...."<<endl;
        break;
        
        default:
        cout<<"Invalid input,please try again"<<endl;
}
	
   }while(operation != 5);

	return 0;
}