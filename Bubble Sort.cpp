#include<iostream>
using namespace std;

int main(){
	
	int a[]={46,23,75,23,76,34,82,6,3,834,572,2,6,9,8,26};
	int n=sizeof(a)/sizeof(a[1]);

	//bubble  sort 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp; 
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	return 0; 
}
