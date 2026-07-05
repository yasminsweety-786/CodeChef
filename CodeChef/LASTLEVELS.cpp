#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	  while (t--){
	      int x,y,z;
	       cin>>x>>y>>z;
	       int total = x*y;
	       int breaks = (x/3)*z;
	       if ( x%3 ==0){
	            breaks -= z;
	       }
	       cout<<total +breaks<<endl;
	  }

}
