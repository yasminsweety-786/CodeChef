#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int t;
	 
	  cin>>t;
	   while ( t--){
	        int a,x,b,y;
	         cin>>a>>x>>b>>y;
	    int AL= a*y;
	     int BB = b*x;
	     if ( AL> BB)
	     {
	          cout<<"Alice"<<endl;
	     }
	     else if( BB> AL){
	          cout<<"BOB"<<endl;
	     }
	     else {
	          cout << "Equal"<<endl;
	     }
	   }

}
