#include<iostream>
using namespace std;

int main(){
	
	int a[]={7,7,7,1,2,3,3,3,4,4,5};
	int n=sizeof(a)/sizeof(a[1]);

	int i=0; 
	while(i<n){
		if(a[i]==a[i+1]){
			a[i]=NULL;
		}
		i++;
	}
	
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}
