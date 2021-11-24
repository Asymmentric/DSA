#include<iostream>
using namespace std;

int main(){
	
	int arr[]={234,902,2228,064,13,765,31,4,0544};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	
	for(int rem=1;max/rem>0;rem*=10){
		
		
			int count[10]={0};
			for(int i=0;i<n;i++){
				count[(arr[i]/rem)%10]++;
			}
			for(int i=1;i<10;i++){
				count[i]+=count[i-1];
			}
			
			int temp[n];
			for(int i=n-1;i>=0;i--){
				
				temp[--count[(arr[i]/rem)%10]]=arr[i];
				
			}
			
			for(int i=0;i<n;i++){
				cout<<temp[i]<<" ";
			}
			
			cout<<endl;
			
			for(int i=0;i<n;i++){
				arr[i]=temp[i];
			}
	
		
		
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
	
	return 0;
}
