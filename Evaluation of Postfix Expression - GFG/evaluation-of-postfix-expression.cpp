// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{   stack<int>s;
    public:
    //Function to evaluate a postfix expression.
    int calculateAns(char op,int num2,int num1){
        if(op=='+'){
            return num1+num2;
        }
        else if(op=='*'){
            return num1*num2;
        }
        else if(op=='/'){
            return num1/num2;
        }
        else if(op=='-'){
            return num1-num2;
        }
    }
    int evaluatePostfix(string S)
    {
        for(int i=0;S[i]!='\0';i++){
            if(isdigit(S[i])){
                int x=S[i]-'0';
                s.push(x);
            }
            else{
                int op1=s.top();
                s.pop();
                int op2=s.top();
                s.pop();
                int ans=calculateAns(S[i],op1,op2);
                s.push(ans);
            }
        }
        
            int value=s.top();
        return value;
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends