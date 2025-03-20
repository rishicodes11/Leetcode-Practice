class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) return 0;
    if(x%10==0 && x!=0) return 0; // as if 0 is ending then it cant be palindrome untill its 0 only 
    int temp=0;
    while(x>temp){
      temp= temp*10 + x%10;
      x/=10;  
    }
    //with ddry run we know that temp>=x at last  
    
 return (x==temp || x==temp/10);
    }
};