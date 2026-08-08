#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 while(t--){
	     int n,a,b;
	     cin>>n>>a>>b;
	     long long rounds  =log2(n);
	     long long total = rounds *a+ (rounds-1)*b;
	      cout<<total<<endl;
	     
	 }

}
