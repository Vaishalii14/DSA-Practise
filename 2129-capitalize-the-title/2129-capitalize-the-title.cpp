class Solution {
public:
    string capitalizeTitle(string title) {
        int length=0;
        int idx=0;
        int i=0;
        while(title[i]!='\0'){
            if(title[i]!=' '){
                length++;
                idx++;
                title[i]=tolower(title[i]);
            }
            else{
                if(length!=1 and length!=2){
                title[idx-length]=toupper(title[idx-length]);
                }
                length=0;
                idx++;
            }
            i++;
        }
        if(length!=1 and length!=2){
        title[idx-length]=toupper(title[idx-length]);
        }
        return title;
        
        

        
        
        
    }
};