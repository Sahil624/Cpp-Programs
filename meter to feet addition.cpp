#include<iostream>
using namespace std;
class dist
{
	float feet,inches,meter,cms;
	public:
		void get()
		{
			cout<<"enter distance in feet and inches";
			cin>>feet>>inches;
		}
		void getm()
		{
			cout<<"enter distance in meteres and centimetres";
			cin>>meter>>cms;
			meter=39.3700787*meter;
			cms=0.39370079*cms;
		}
		void add()
		{
			inches=inches+meter+cms;
			while(inches>=12)
			{
				inches=inches-12;
				feet=feet+1;
			}
		}
		void put()
		{
			cout<<"total distance in feets and inches "<<feet<<"feets and "<<inches<<"inches";
		}
};
int main()
{
	dist d1;
	d1.get();
	d1.getm();
	d1.add();
	d1.put();
	return 0;
}
