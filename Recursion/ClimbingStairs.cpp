#include<bits/stdc++.h>
using namespace std;

int calcWays(int step){
	if(step<0)
		return 0;
	if(step==0)
		return 1;
	
	int res=calcWays(step-1)+calcWays(step-2);
	return res;
}

int climbStairs(int n){
	int ans=calcWays(n);
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<climbStairs(n)<<endl;
}
