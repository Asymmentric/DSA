#include<iostream>
using namespace std;

int main(){
	
	int a[]={8,2,6,4,3,5};
	int n=sizeof(a)/sizeof(a[1]);

	//insertion sort 
	
	for(int i=1;i<n;i++){
		int j=i;
		int temp=a[i];
		while(a[j-1]>temp && j>=0){
			a[j]=a[j-1];
			j--;
		}
		a[j]=temp;	
	}
	
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}
 
