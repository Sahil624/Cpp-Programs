#include<iostream>
using namespace std;

int main(){
int *ptr,*ptr2;
float *ptr1;
ptr= new int;
ptr1 = new float;
ptr2 = new int[3];
*ptr = 10;
*ptr1 = 50.21;
//*ptr2={10,20,30};
cout<<*ptr<<endl<<*ptr1<<endl<<*ptr2;
return 0;
}
