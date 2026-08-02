#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

 int  r,o,c;
  cin>>r>>o>>c;
  int rem = 20-o;
   int rb= rem*6;
   int score = rb*6;
   int tot= c+score;
    if ( tot > r){
         cout<<"YES"<<endl;
    }
    else {
         cout <<"NO"<<endl;
    }
}
