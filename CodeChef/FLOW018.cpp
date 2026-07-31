#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
// 	ios::sync_with_stdio(false);
//     cin.tie(nullptr);
	
	 int t;
	  cin>>t;
	   while (t--){
	        long long fact =1;
	        
	        int n;
	        cin>>n;
	         for ( int i=1; i<=n; i++){
	             fact *=i;
	              
	         }
	         cout<<fact<<endl;
	   }

}
