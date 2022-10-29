//561: Array Partition::

#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& nums){
	 sort(nums.begin(), nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i+=2){
            sum+=nums[i];           
        }
        return sum;
}

int main(){
	vector<int> vec;
	int a;
	while(cin>>a)
		vec.push_back(a);
	
	int res=maxSum(vec);
	cout<<res;
}
