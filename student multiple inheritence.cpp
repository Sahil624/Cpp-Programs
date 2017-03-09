#include<iostream>
using namespace std;

class student{
	public :
		int roll;
		string name;
		
		student(int r,string n){
			roll= r;
			name = n;
		}
};


class marks{
	public:
	
	float a,b,c;
	
	marks(float x,float y,float z){
		a=x;
		b=y;
		c=z;
	}
};

class result : public student,public marks{
	public:
	float res= (((a+b+c)/300)*100);;

	result(int r,string str,float x,float y,float z):
		student(r,str),marks(x,y,z)
		{
			cout<<"All Good"<<endl;
		}
	string grade;
	void show(){
		
		
		if (res >=80){
			grade = "A";
		}
		
		else if(res >= 60 && res < 80){
			grade = "B";
		}
		
		else if (res >= 40 && res < 60){
			grade = "C";
		}
		
		else{
			grade = "D";
		}
		
		cout<<"Result is "<<res<<"% and Grade is "<<grade<<endl;
	}
};

int main(){
	result obj(556,"sahil",59.69,95.6,99.99);
	
	obj.show();
	
	return 0;
	
}
