#include<iostream>
using namespace std;

int main(){
	
	int a[]={3,9,2,0,5,9,0,3,2};
	int n=sizeof(a)/sizeof(a[1]);
	
	
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}

	for(int i=0;i<n;i++){
		int count=0;
		for(int j=i+1;j<n;j++){
			
			if(a[i]==a[j]){
				count=1;
				break;
			}
			
		}
		if(count==0){
			cout<<endl<<a[i];
			break;
		}
		
	}
	return 0; 
}
