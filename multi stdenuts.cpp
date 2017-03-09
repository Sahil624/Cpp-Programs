#include<iostream>
using namespace std;

class student{
	public :
		int roll;
		
		void get_roll(){
			cout<<"Enter Roll No"<<endl;
			cin>>roll;
		}
		
		void disp_roll(){
			cout<<"Roll number is :"<<roll<<endl;
		}
};


class test : virtual public student{
	public:
	
	float a,b,c;
	
	void get_marks(){
		cout<<"Enter 3 Marks :"<<endl;
		cin>>a>>b>>c;
	}
};

class sports : virtual public student{
	public:
		float spt_mark;
		
		void get_sprt(){
			cout<<"Enter marks in sports"<<endl;
			cin>>spt_mark;
		}
				
};

class result : public test,public sports{
	int res;
	
	public:
		void get_mrk(){
			get_roll();
			get_marks();
			get_sprt();
		}
		
		void put_res(){
			res = a+b+c+spt_mark;
			cout<<roll<<"Has scored "<<res<<"Marks"<<endl;
		}
};



int main(){
	result res;
	
	res.get_mrk();
	res.put_res();
	
	return 0;
}
