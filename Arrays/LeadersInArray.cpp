#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec={16,17,4,3,5,2};
	vector<int> ans;
	int n=vec.size(), c=0;
	
/*
	for(int i=0;i<n;i++){
		int j;
		for(j=i+1;j<n;j++){
			if(vec[i] <vec[j])
				break;
			}
			if(j==n)
				ans.push_back(vec[i]);	
	}
*/

//OPTIMIZED::


	int maxi=vec[n-1];
		ans.push_back(maxi);
		
	for(int i=n-2;i>=0;i--){
		if(vec[i]>maxi){
		
			maxi=vec[i];
		ans.push_back(maxi);
	}
	}
	
	
	for(auto& it:ans)
		cout<<it<<" ";
	
}
