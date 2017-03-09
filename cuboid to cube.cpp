#include<iostream>
using namespace std;

class cube;

class cuboid{
	int l,b,h;
	friend class cube;
	float vol;
	
	public:
		void getdata(){
			cout<<"Enter length breadth and height"<<endl;
			cin>>l>>b>>h;
		}
		
		void putdata(){
			cout<<"Length ="<<l<<" breadth ="<<b<<"Height ="<<h<<endl;
		}
		
		void volcalc(){
			vol=l*b*h;
			cout<<"Volume ="<<vol<<endl;
		}
};

class cube{
		public:
	
	int a;
	float vol;
	
		void getside(cuboid cb){
			a=cb.l;
		}
		
		void putdata(){
			cout<<"Side is="<<a;
		}
		
		void volcalc(){
			vol = a*a*a;
			cout<<"volume ="<<vol;
		}
};


int main(){
	cube c;
	cuboid cb;
	
	cb.getdata();
	cb.putdata();
	cb.volcalc();
	c.getside(cb);
	c.putdata();
	c.volcalc();
	
	return 0;
}
