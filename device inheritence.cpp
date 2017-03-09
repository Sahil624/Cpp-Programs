#include<iostream>
using namespace std;

class node{
	protected:
		string brand;
		int mfg , wty;
};

class server : public node{
	protected:
		int mttr,mttf,tps;
};

class device : public server{
	protected:
		int non;
		
	public:
		void getdata(){
			cout<<"Enter Brand Name,Manufacturing Year,Warranty Years,mttr,mttf,tps,no of nodes"<<endl;
			cin>>brand>>mfg>>wty>>mttr>>mttf>>tps>>non;
		}
		
		void putdata(){
			cout<<"Brand:"<<brand<<"\nManufacturing Year:"<<mfg<<"\nWarranty Year:"<<wty<<"\nMttr:"<<mttr<<"\nMttf:"<<mttf<<"\ntps:"<<tps<<"\nNo of nodes:"<<non;
		}
};

int main(){
	device obj;
	obj.getdata();
	obj.putdata();
	return 0;
}
