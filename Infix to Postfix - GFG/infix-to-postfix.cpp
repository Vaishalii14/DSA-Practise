// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{   stack<char>st;
    public:
    //Function to convert an infix expression to a postfix expression
    int precedence(char ch){
        if(ch=='^') return 3;
        else if(ch=='*'||ch=='/')return 2;
        else if(ch=='+'||ch=='-') return 1;
        else return -1;
    }
    bool isoperator(char ch){
        return (ch=='*'||ch=='+'||ch=='/'||ch=='^');
    }

    string infixToPostfix(string s)
    {   string ans;
    
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if((c>='a' and c<='z') or(c>='A' and c<='Z')){
               ans+=c;
            }
            else if(c=='('){
                st.push('(');
            }
            else if(c==')'){
                while(st.top()!='('){
                 ans+=st.top();
                 st.pop();
                }
                st.pop();
            }
            else {
                   while(!st.empty() and (precedence(c)<=precedence(st.top()))){
                      ans+=st.top();
                       st.pop();
                   }
                   st.push(c);
            } 
        }
                  
                   
            
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends