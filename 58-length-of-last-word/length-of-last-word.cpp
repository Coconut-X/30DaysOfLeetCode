class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int size=s.length();
        bool start=false;
        for(int i=size-1;i>=0;i--)
        {
            if(s[i]!=' ' && !start) start=true;
            if(start)
            {
                if(s[i]==' ')return c;
                c++;
            }
            
        }return c;
    }
};