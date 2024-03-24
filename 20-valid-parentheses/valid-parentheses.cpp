class Solution {
public:
    bool isValid(string s) {
        
        vector<char> st;
        for(auto i:s)
        {
            if(i=='(' || i=='{'|| i=='[' )
            {
                st.push_back(i);
            }
            else
            {
                if(st.empty() || (st[st.size()-1]=='(' && i!=')') ||(st[st.size()-1]=='{' && i!='}')||(st[st.size()-1]=='[' && i!=']'))
                {
                    return false;
                }
                else
                {
                    st.pop_back();
                }
            }
            
        }
        return st.empty();
    }
};