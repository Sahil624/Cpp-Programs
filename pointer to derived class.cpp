#include<iostream>
using namespace std;

class B
{

	public:
		int b;
		void show(){
			cout<<"b="<<b<<endl;
		}
	
};

class D: public B{
	public:
		int d;
		
		void show()
		{
			cout<<"b="<<b<<"\nd="<<d<<endl;
		}
};

int main(){
	B base;
	B *bptr = &base;
	
	bptr -> b=100;
	
	cout<<"Pointer to base"<<endl;
	
	bptr -> show();
	
	D derived;
	bptr = &derived;
	bptr -> b =200;
	
	bptr -> show();
	
	D *dptr;
	dptr = &derived;
	
	dptr -> d=300;
	
	cout<<"pointer of derived class"<<endl;
	
	dptr -> show();
	
	cout<<"Casting base ptr to derived ptr"<<endl;
	
	((D*)bptr) -> d=400;
	((D*)bptr) -> show();
	
	return 0; 
	
}
