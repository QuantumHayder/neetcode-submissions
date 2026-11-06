class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (char c: s)
        {
            if (c=='(' || c=='{' || c == '[')
                brackets.push(c);
            else if(c == ')')
            {
                if(brackets.empty() || brackets.top() != '(')
                    return false;
                else
                    brackets.pop();
            }
            else if(c == '}')
            {
                if(brackets.empty() || brackets.top() != '{')
                    return false;
                else
                    brackets.pop();
            }
            else if(c == ']')
            {
                if(brackets.empty() || brackets.top() != '[')
                    return false;
                else
                    brackets.pop();
            }
        }
        if(!(brackets.empty()))
            return false;
        return true;

    }
};
