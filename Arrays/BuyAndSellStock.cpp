#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={7,1,5,3,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int profit=0,temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i])
				 temp=arr[j]-arr[i];
			if(temp>profit)
				profit=temp;

		}
	}
	cout<<profit;
	
	
}
