class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>> st;
        string cur;
        int curnum=0;

        for(const char c : s)
        {
            if(isdigit(c))
            {
                curnum=curnum*10 +( c - '0');
            }
            else
            {
                if(c=='[')
                {
                    st.emplace(cur,curnum);
                    curnum=0;
                    cur="";

                }
                else if(c==']')
                {
                    const auto [prev,n]=st.top();
                    st.pop();
                    cur=prev + getrepeat(cur,n);
                }
                else
              {
                cur+=c;
              }

            }
            


        }
        return cur;
        
    }

    private:

    string getrepeat(const string& s, int n)
    {
        string r;
        while(n--)
        {
            r+=s;
        }
        return r;
    }
};
