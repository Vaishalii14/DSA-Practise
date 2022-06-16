bool comparator(string a, string b){
        return a+b>b+a;
}
class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        vector<string>str;
        string result="";
        for(auto i:nums){
            str.push_back(to_string(i));
        }
        sort(str.begin(),str.end(),comparator);
        for(int i=0;i<str.size();i++){
            result+=str[i];
        }
        if(result[0]=='0'){
            return "0";
        }
        return result;
    }
};