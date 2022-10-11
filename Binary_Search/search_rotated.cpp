#include<bits/stdc++.h>
using namespace std;


int pivot(int* arr, int n){
     int s=0,e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0])
            s=mid+1;
        else
            e=mid;
    }
    return s;
}
int binarySearch(int* arr, int s, int e, int key){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
             s=mid+1;
        else
            e=mid-1;
    }
    return -1;
}
int search(int* arr, int n, int key) {
  int p=pivot(arr, n);
    if(key>=arr[p] && key<=arr[n-1])
        return binarySearch(arr, p, n-1, key);
    else
       return binarySearch(arr, 0, p-1, key);
}

int main(){
	
	int n;
	cout<<"Enter elements no.of elements: ";
	cin>>n;
	int arr[n];
	
	int t;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to search: ";
	int key;
	cin>>key;
	int ans=search(arr, n, key);
	cout<<ans;
}
