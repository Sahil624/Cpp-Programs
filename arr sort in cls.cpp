#include<iostream>
using namespace std;

class ptr{
	int arr[100];
	public :
		
		void getarr(int n){
			for(int i;i<n;i++){
				cin>>arr[i];
			}
		}
		
		void sort (int n){
			int temp=0;
			
			for(int i=0;i<n;i++){
				for(int j=0;j<n-1;j++){
					if (arr[j]>arr[j+1]){
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					}
				}
			}
			
		}
		
		void putarr(int n){
			for(int i;i<n;i++){
				cout<<arr[i];
			}
		}
};

int main(){
	ptr obj;
	int n;
	
	cout<<"Enter the no elements"<<endl;
	cin>>n;
	
	obj.getarr(n);
	obj.sort(n);
	obj.putarr(n);
	
}

