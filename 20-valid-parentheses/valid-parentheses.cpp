class Solution {
public:
    bool isValid(string s) {
        stack<char>symbol;
    int n = s.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            symbol.push(s[i]);
        }
        else
        {
            if(symbol.empty())
            {
            return false;
            }
            char ch = symbol.top();
            symbol.pop();
            if(s[i] == ')' && ch != '(' || s[i] == ']' && ch !='[' || s[i] == '}' && ch != '{')
            {
                return false;
            }
        }
    }
    return symbol.empty();
    }
};