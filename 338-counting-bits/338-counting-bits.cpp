/*
Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit.
for example :
10 in binary is 00001010
9 in binary is 00001001
8 in binary is 00001000
7 in binary is 00000111
So if we subtract a number by 1 and do bitwise & with itself (n & (n-1)), we unset the rightmost set bit. If we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count.
*/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>answer;
        for(int i=0;i<=n;i++){
            int count=0;
           int temp=i;
           while(temp){
               temp=temp&(temp-1);
               count++;
           }
           answer.push_back(count);
           
       }
        return answer;
    }
};