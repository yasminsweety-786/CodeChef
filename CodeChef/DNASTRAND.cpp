#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 while( t--){
	      int n;
	       string s;
	       cin>>n>>s;
	       string comp= " ";
	   for ( char c:s){
	       if ( c=='A') comp  +='T';
	      else  if ( c=='T') comp  +='A';
	        else if ( c=='C') comp  +='G';
	        else if ( c=='G') comp  +='C';
	       
	   }    
	   cout<<comp<<endl; 
	 }

}
