#include<iostream>
using namespace std;

class base{
	public:
		void print(){
			cout<<"\n Print Base";		
		}
		virtual void show() = 0;
};

class derived : public base{
	public:
		void print(){
			cout<<"\n print-derived";
		}
		
		void show(){
			cout<<"\n Show Derived";
		}
};

int main(){
	derived D;
	base *bptr = &D;

	
	bptr -> show();
	bptr -> print();
	
	return 0;
}
