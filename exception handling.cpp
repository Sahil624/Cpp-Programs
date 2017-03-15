#include<iostream>
using namespace std;

int main(){
	int num,den;
	
	try{
		cin>>num>>den;
		if(den == 0){
			throw(den);
		}
		
		else{
			cout<<(num/den);
		}
	}
	
	catch(int x){
		cout<<"Denominator cannot be zero";
	}
	
	return 0;
}
