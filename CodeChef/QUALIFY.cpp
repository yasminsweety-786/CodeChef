#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	  while (t--){
	       int x,a,b;
	        cin>>x>>a>>b;
	       
	        int total = a + 2*b; 
	        
	        if ( total>=x){
	             cout<<"qualify"<<endl;
	        }
	        else {
	             cout<< "NotQualify"<<endl;
	        }
	  }

}
