#include<iostream>
using namespace std;

class A{
	protected :
		int i;
		
		public:
			void put_i(){
				cout<<"I is "<<i<<endl;
			}
			
};

class B :virtual public A{
	protected:
		int j;
		
		public:
			void put_j(){
				cout<<"J is :"<<j<<endl;
			}
};

class C: virtual public A{
	protected:
		int k;
		
	public:
		void put_k(){
			cout<<"K is :"<<k<<endl;
		}
};

class D: public B,public C{
	protected:
		int sum;
		
	public:
		void display(){
			i=10;j=20;k=30;
			
			sum = i+j+k;
			
			put_i();
			put_j();
			put_k();
			
			cout<<"Sum is :"<<sum<<endl;
		}
};

int main(){
	D obj;
	obj.display();
	
	return 0;
}
