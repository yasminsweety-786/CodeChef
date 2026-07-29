#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int t;
	  cin>>t;
	   while (t--){
	        int x,y,a,b;
	         cin>>x>>y>>a>>b;
	         int overlap =0;
	         if ( x==a||x==b)overlap++;
	          if (y==a ||y== b) overlap++;
	          cout<<2-overlap<<endl;
	   }

}
