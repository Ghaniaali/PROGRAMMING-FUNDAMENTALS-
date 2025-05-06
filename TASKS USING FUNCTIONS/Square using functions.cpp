#include<iostream>
#include<cmath>
using namespace std;
int square(int,int);

int square(int x,double y){
	
	return pow(x,2);
	
	return pow(y,2);

}

int main(){
	
	int x,y;
	
	cout<<"Enter a intergar to take a square of: ";
	cin>>x;
	cout<<"Enter a decimal to take a square of: ";
	cin>>y;
	
	square(x,y);
}