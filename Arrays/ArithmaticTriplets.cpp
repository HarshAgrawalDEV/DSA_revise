#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={0,1,4,6,7,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d,c=0;
	cin>>d;
/*
	for(int i=0;i<n-2;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]-arr[i]==d){
				for(int k=j+1;k<n;k++){
					if(arr[j]+d==arr[k])
						c++;
				}
			}
		}
	}
*/
for(int i=0;i<n-2;i++){
	for(int j=i+1;j<n-1;j++){
		if(arr[i]+d==arr[j]){
			if(arr[i]+2*d==arr[j])
				c++;
		}
	}
}
	cout<<c<<endl;
}
