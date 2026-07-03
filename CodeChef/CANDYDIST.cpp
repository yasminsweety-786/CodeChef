#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 while(t--){
	      int x,y;
	      cin>>x>>y;
	      if (x%y ==0 && (x/y) % 2 ==0){
	           cout<<"Yes"<<endl;
	      }
	      else {
	           cout<<"No"<<endl;
	      }
	 }
	  

}
