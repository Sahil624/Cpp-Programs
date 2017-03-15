#include<iostream>
using namespace std;

int main(){
	int num;
	
	cin>>num;
	
	try{
		if(num == 0){
			throw("Zero");
		}
		
		else if (num <0){
			throw("Negative");
		}
		
		else{
			cout<<"All good number is positive";
		}
	}
	
	catch(const char *err){
		cout<<"There was an error NIGGA. Number is "<<err;
	}
}
