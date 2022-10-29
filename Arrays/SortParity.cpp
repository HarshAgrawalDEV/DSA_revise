//Sort Array By Parity

#include<bits/stdc++.h>
using namespace std;

vector<int> sortByParity(vector<int>& nums){
	int i=0, j=0;
	for(i;i<nums.size();i++){
		if(nums[i]%2==0){
			swap(nums[i], nums[j]);
			j++;
		}
	}
	return nums;
}

int main(){
		vector<int> vec;
	int a;
	while(cin>>a)
		vec.push_back(a);
	
	vec=sortByParity(vec);
	for(auto &i:vec)
		cout<<i<<" ";
}
