class Solution {
public:
    
bool isConvertibleToInt(const std::string& str) {
    try {
        std::stoi(str);
        return true;
    } catch (const std::invalid_argument&) {
        return false;
    } catch (const std::out_of_range&) {
        return false;
    }
}

    int evalRPN(vector<string>& tokens) {
        stack<int> operands;
        int n = tokens.size();
        for(int i=0; i<n; ++i)
        {
            if(isConvertibleToInt(tokens[i]))
                operands.push(stoi(tokens[i]));
            else
            {
                int opr1 = (operands.top());
                operands.pop();
                int opr2 = (operands.top());
                operands.pop();

                if(tokens[i] == "+")
                    operands.push(opr2 + opr1);
                else if(tokens[i] == "-")
                    operands.push(opr2 - opr1);
                else if(tokens[i] == "*")
                    operands.push(opr2 * opr1);
                else
                    operands.push(opr2 / opr1);
            }
        }
        int result = operands.top();
        operands.pop();
        return result;
    }
};
