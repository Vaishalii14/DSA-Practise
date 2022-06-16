class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]+=1;
        }
        else{
            int index=n-1;
            while(index!=-1 and digits[index]==9){
                if(index==0){
                    digits[0]=1;
                    digits.push_back(0);
                }
                else{
                    digits[index]=0;
                }
                index--;
            }
            if(index!=-1){
                digits[index]+=1;
            }
        }
        return digits;
    }
};