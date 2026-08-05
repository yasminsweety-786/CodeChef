#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
 cin>>t;
 while(t--){
     int h,x,y;
      cin>>h>>x>>y;
     int rem = h-y;
     int nrml = ( rem >0) ? (rem+x-1)/x:0;
     int tot = 1+ nrml;
     cout<<tot<<endl;
      
 }
 
}
     

