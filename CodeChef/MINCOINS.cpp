#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int t;
	 cin>>t;
	  while(t--){
	       int x;
	       cin>>x;
	       if(x%5!=0 ){
	            cout<<-1<<endl;
	       }
	       else {
	           int coins  = x/10;
	           if (x%10 !=0){
	               coins+=1;
	           }
	           cout<<coins<<endl;
	       }
	  }

}
