void findLargestOddSubstring(string num) {
    // write your code here...
     for (int i=num.length()-1; i>=0; i--){
         int digit = num[i] -'0';
          if (digit %2!=0){
               cout<<num.substr(0,i+1);
               return ;
          }
     }
     cout<<-1;
     }

