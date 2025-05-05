#include<iostream>
using namespace std;

int main(){
	
	double townA, townB;
	double GtownA, GtownB;
	int years=0;
	
	cout<<"|******  Population Calculator  ******|"<<endl;
	cout<<"|   Enter the Population of Town A:   |"<<endl;
	cin>>townA;
	cout<<"|   Enter the Population of Town B:   |"<<endl;
	cin>>townB;
	
	cout<<"|   Enter the Growth rate of Town A:   |"<<endl;
	cin>>GtownA;
	cout<<"|   Enter the Growth rate of Town B:   |"<<endl;
	cin>>GtownB;
	
	while (townA < townB) {
        townA += townA * (GtownA/100);
        townB += townB * (GtownB/100);
        years++;
    }

   
    cout<<"After "<<years<<" years,the population of town A will be greater than or equal to the population of town B."<<endl;
    cout <<"Population of town A: " << townA << endl;
    cout <<"Population of town B: " << townB << endl;
	 
	
	
	
	return 0;
}