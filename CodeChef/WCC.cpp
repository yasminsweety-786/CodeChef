#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	  while(t--){
	    long long x;
	    string s;
	     cin>>x>>s;
	      int carl =0 , chef =0;
	     for (  char c:s){
	          if ( c== 'C') carl +=2;
	          else if ( c=='N') chef +=2;
	          else {
	              carl++;
	              chef++;
	          }
	     }
	          if (carl > chef ) 
	          cout<< 60*x<<endl;
	          else if ( chef > carl)
	          cout<<40* x<<endl;
	          else 
	          cout<<55*x<<endl;
	     	  
	     
	      
	  }
}
