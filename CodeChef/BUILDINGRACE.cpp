#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 int t;
	  cin>>t;
	   while(t--){
	        int a,b,x,y;
	         cin>>a>>b>>x>>y;
	         if ( a*y < b*x){
	              cout<<"chef"<<endl;
	         }
	         else if ( a*y > b*x){
	              cout<<"chefina"<<endl;
	         }
	         else {
	              cout<<"Both"<<endl;
	         }
	   }

}
