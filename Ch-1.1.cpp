class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> S;
        int a,b;
        for(auto ite:tokens)
        {
            if(ite=="+")
            {
                a = S.top();S.pop();
                b = S.top();S.pop();
                S.push(b+a);
            }
            else if(ite=="-")
            {
                a = S.top();S.pop();
                b = S.top();S.pop();
                S.push(b-a);
            }
            else if(ite=="*")
            {
                a = S.top();S.pop();
                b = S.top();S.pop();
                S.push(b*a);
            }
            else if(ite=="/")
            {
                a = S.top();S.pop();
                b = S.top();S.pop();
                S.push(b/a);
            }
            else 
            {
                S.push(stoi(ite));
            }
        }
        return S.top();
    }
};
