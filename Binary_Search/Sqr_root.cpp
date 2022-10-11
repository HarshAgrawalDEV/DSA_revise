#include<bits/stdc++.h>
using namespace std;


long long int binarySearch(int n){
	long long int ans=-1;
	int l=0, r=n;
	
	while(l<=r){
		long long int mid=l+(r-l)/2;
		long long int sqr=mid*mid;
		
		if(sqr==n)
			return mid;
		
		else if(sqr<n){
			ans=mid;
			l=mid+1;
		}	
		else
			r=mid-1;
		
	}
	return ans;
	
}

double precesion(int sol, int p, int n){
	double fact=1;
	double tempSoln=sol;
	for(int j=0;j<p;j++){
		fact=fact/10;
		for(double i=tempSoln;i*i<n;i=i+fact){
		tempSoln=i;
		}
	}
	return tempSoln;
}



int main(){
	int n;
	cin>>n;
long long	int int_sol=binarySearch(n);
	cout<<"Enter no of precisions: ";
	int p;
	cin>>p;
	double ans=precesion(int_sol, p, n);
	cout<<ans;
	
	
}
