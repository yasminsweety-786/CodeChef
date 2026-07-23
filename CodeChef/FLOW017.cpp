#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 while (t--){
	      int a,b,c;
	       cin>>a>>b>>c;
	       int lar =  max(a,max(b,c));
	       int sma =  min(a,min(b,c));
	        int seclar = a+b+c - lar-sma ;
	        cout<<seclar<<endl;
	      
	 }

}
