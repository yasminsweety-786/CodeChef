#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t; 
cin>>t ;
while(t--){
     int n;
     cin>>n;
    int countR =0;
         
           for (int i=0; i<n; i++){
               int d;
               cin>>d;
               
                if( d>=1000) countR++;
            
           }
           cout<<countR<<endl;
           
     
     
}
}
