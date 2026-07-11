#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	  while(t--){
	       int a,b,x,y;
	       cin>>a>>b>>x>>y;
	       if ( b>a){
	           int sub = b-a;
	           
	            if ( x>=sub){
	             cout<<"YES"<<endl;
	            }
	            else {
	                 cout<<"NO"<<endl;
	            }
	       }
	        else if (b<a){
	            int def =a-b ;
	            if (y>=def){
	                cout<<"Yes"<<endl;
	            }
	            else {
	                 cout<<"No"<<endl;
	            }
	        }
	       else {
	           cout<<"Yes"<<endl;
	       }
	  }

}
