#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="Let's take contest";
	int l=0, r=0;
	while(l<s.length()){
		while(r<s.length() && s[r]!=' ')
			r++;
		reverse(s.begin()+l, s.begin()+r);
		l=r+1;
		r=l;
	}
        cout<<s;
}
