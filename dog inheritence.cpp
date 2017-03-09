#include <iostream>
using namespace std;

class Animal{
    public:
    int legs;
};

class Dog : public Animal{
    public:
    int tail;
    
    Dog(){
        legs = 4;
        tail = 1;
    }
};



int main() {
	// your code goes here
	Dog d;
	cout<<d.legs<<endl;
	cout<<d.tail<<endl;
	return 0;
}
