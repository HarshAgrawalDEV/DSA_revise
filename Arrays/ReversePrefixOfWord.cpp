#include<bits/stdc++.h>
using namespace std;

int main(){
	string word="xyxzxe";
	char ch='z';
	int r=0;
	while(r<word.length()){
		r++;
		if(word[r]==ch){
			reverse(word.begin(), word.begin()+r+1);
			break;}
		
	}
	cout<<word;
}
