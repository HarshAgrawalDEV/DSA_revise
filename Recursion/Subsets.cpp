#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int> nums,int index ,vector<int> output, vector<vector<int>>& ans){
	if(index>=nums.size()){
		ans.push_back(output);
		return ;
	}
	subsets(nums, index+1,output, ans);
	
	int element=nums[index];
	output.push_back(element);
	subsets(nums, index+1, output, ans);
}

void printVector(vector<vector<int>> ans){
	for(auto& it:ans){
		for(auto& p:it)
			cout<<p<<" ";
		cout<<endl;
	}
}

int main(){
	vector<int> nums={1,2,3};
	
	int index=0;
	vector<vector<int>> ans;
	vector<int> output;
	subsets(nums, index,output ,ans);
	printVector(ans);
}
