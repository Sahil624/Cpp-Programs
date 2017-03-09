#include<iostream>
using namespace std;

class arr{
	public:
		
		int insert(int *ptr,int pos,int n,int num){
			int temp[100],j;
			for(int i=0;i<n+1;i++){
				if(i==pos){
					temp[i]=num;
					j--;
				}
				
				temp[i]=arr[j];
				j++;
			}
		}
		
		void 
};
