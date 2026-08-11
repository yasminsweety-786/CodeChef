#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int t;
	  cin>>t;
	   while(t--){
	        int n;
	         cin>>n;
	         bool prime  = true;
	        if ( n< 2) prime = false;
	        else {
	            for (int i=2; i*i <=n; i++){
	                if ( n%i==0){
	                    prime = false ;
	                    break;
	                }
	            }
	        }
	        
	        if (prime) cout<<"Yes"<<endl;
	        else 
	        cout<<"No"<<endl;
	           }
	           
	   }


