#include <iostream>
using namespace std;

int main(){
	int num,rev=0,lastvalue;
	
	cout<<"Enter the three digit value to be reversed"<<endl;
	cin>>num;
	
lastvalue= num % 10;
rev= rev*10+lastvalue;
num= num/10;

lastvalue= num % 10;
rev= rev*10+lastvalue;
num= num/10;

lastvalue= num % 10;
rev= rev*10+lastvalue;
num= num/10;
	
	cout<<"The reverse order is:"<<rev<<endl;
	
	return 0;
}
