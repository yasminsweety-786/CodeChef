#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
 cin>>t;
  while (t--){
       int x,y;
        cin>>x>>y;
         int a= (500-2*x)+( 1000- 4 * (x+y));
         int b= ( 1000 - 4*y) + (500-2* (x+y));
          
          cout<<max(a,b)<<endl;
  }
}
