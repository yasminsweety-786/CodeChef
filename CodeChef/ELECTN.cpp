#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	  while(t--){
	       int b,a;
	       cin>>b>>a;
	        int arr[100];
	        for(int i=0; i<b;i++){
	            cin>>arr[i];
	        }
	        int count =0;
	        for ( int i=0;i<b;i++){
	            if (arr[i] >=a){
	                count++;
	            }
	        }
	        cout<<count<<endl;
	  }

}
