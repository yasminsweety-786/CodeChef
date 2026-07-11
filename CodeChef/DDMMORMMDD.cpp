#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // your code goes here
         string d = s.substr (0,2);
         string m = s.substr ( 3,2);
         int first = stoi(d);
          int second = stoi(m);
          if ( first >12){
               cout<<"DD/MM/YYYY"<<endl;
          }
          else if ( second >12){
               cout<<"MM/DD/YYYY"<<endl;
          }
          else {
               cout<<"Both"<<endl;
          }
         
    }

}
