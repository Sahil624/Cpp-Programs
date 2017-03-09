#include<iostream>
using namespace std;

class alpha{
	int x;
	public:
		alpha(int i){
			x=i;
			cout<<"Alpha initialised"<<endl;
		}
		
		void show_x(){
			cout<<"x :"<<x<<endl;
		}
};

class beta{
	float y;
	
	public:
		beta (float j){
			y=j;
			cout<<"beta initialised"<<endl;
		}
		
		void show_y(){
			cout<<"y :"<<y<<endl;
		}
};

class gamma : public beta,public alpha{
	int m,n;
	
	public:
		gamma (int a,float b,int c,int d):
			beta(b),alpha(a)
		{
			m=c;n=d;
			cout<<"gamma initialised"<<endl;
		}
		
		void show_m(){
			cout<<"m :"<<m<<" n :"<<n<<endl;
		}
};

int main(){
	gamma g(5,10.25,20,26);
	
	g.show_x();
	g.show_y();
	g.show_m();
	
	return 0;
}
