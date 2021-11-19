#include<iostream>
using namespace std;

int main(){
	
	int a[]={3,9,2,0,5,9,0,3,2};
	int n=sizeof(a)/sizeof(a[1]);
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum^a[i];
	}
	
	cout<<sum;

	return 0;
}
