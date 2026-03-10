class Solution {
public:
   
   bool isValid(string s) {
    stack<char> st;                     // Stack to store opening brackets

    for (char ch : s) {                 // Loop through each character in the string
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);                // Push opening brackets into stack
        } else {
            if (st.empty()) return false;   // If stack is empty, no matching opening bracket

            char top = st.top();        // Get top element from stack
            st.pop();                   // Remove it after checking

            // Check if the current closing bracket matches the last opening bracket
            if (ch == ')' && top != '(') return false;
            if (ch == '}' && top != '{') return false;
            if (ch == ']' && top != '[') return false;
        }
    }

    return st.empty();                  // If stack is empty, all brackets matched correctly
}
    
       
};