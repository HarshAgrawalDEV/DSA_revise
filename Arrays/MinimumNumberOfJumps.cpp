#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
//	int i=0, j=0, count=-1;
//	int element=-1;
////	while(j<nums.size()){
////		element=arr[i];
////	}
//while(j<vec.size()){
//	element=vec[i];
//	while(vec[j+element]<vec.size()){
//	
//		count++;
//	j++;
//}
//i++;
//}
//cout<<count;
	int count=-1;
	int i=0, element=0;
	while(i<vec.size()){
		element=vec[i];
		i+=element;
		count++;
		if(i==vec.size()-1)
			break;
	}
	cout<<count;
	cout<<2^2;

}

