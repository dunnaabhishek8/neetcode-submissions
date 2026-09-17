class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>s;

        for(int i=0;i<tokens.size();i++){
            string ch=tokens[i];
          if(ch=="+"||ch=="-"||ch=="*"||ch=="/"){
           
           int first=s.top();
           s.pop();

           int second=s.top();
           s.pop();

           int ans;
           if(ch=="+"){
            ans=first+second;
            }
            else if(ch=="-"){
            ans=second-first;
            }
            else if(ch=="*"){
            ans=first*second;
           }
            else {
              ans=second/first;
            }
           s.push(ans);
          }
           else{
            s.push(stoi(ch));
          }
        }

        return s.top();

    }
};
