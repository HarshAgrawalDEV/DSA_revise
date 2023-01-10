#include<iostream>
using namespace std;

bool linSearch(int *arr, int size, int key){
	if(size==0)
		return false;
	if(arr[0]==key)
		return true;
	else{
		bool rem = linSearch(arr+1, size-1, key);
		return rem;
	}
}

int main(){
	int arr[5]={4,8,5,1,3};
	int key;
	cin>>key;
	bool ans =linSearch(arr, 5,key);
	if(ans)
		cout<<"element found";
}
