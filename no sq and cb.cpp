#include<iostream>
using namespace std;

class np{
	public :
		int n;
		
		np(int x){
			n=x;
		}
};

class sq{
	public:
		int sqr;
		
		sq(){
			
		}
};

class cube : public np,public sq{
	public:
		int cb;
		
		cube(int no):
		np(no)
		{
			sqr = n*n;
			cb = sqr * n;
			
		}
		
		void show(){
			cout<<"No is "<<n<<" Square is "<<sqr<<" Cube is "<<cb<<endl;
		}
};

int main(){
	cube obj(2);
	obj.show();
	
	return 0;
}
