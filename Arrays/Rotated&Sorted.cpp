#include<bits/stdc++.h>
using namespace std;

bool rotated_Sorted(vector<int>& nums){
	int count=0;
	for(int i=0;i<nums.size();i++){
		if(nums[i]>nums[(i+1)%nums.size()])
			count++;
	}
	if(count>1)
		return false;
	return true;
}

int main(){
	vector<int> nums;
	cout<<"Enter elements: ";
	int temp;
	for(auto i:nums){
		cin>>temp;
		nums.push_back(temp);
	}
	
	if(rotated_Sorted(nums))
	for(auto i:nums)
		cout<<i<<" ";
		
	
}

