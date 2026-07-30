#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int t;
	  cin>>t;
	   while(t--){
	        int x,y,r;
	         cin>>x>>y>>r;
	         int money = r/30;
	         int tot = x+money;
	         cout<<(tot+y-1)/y<<endl;
	   }

}
