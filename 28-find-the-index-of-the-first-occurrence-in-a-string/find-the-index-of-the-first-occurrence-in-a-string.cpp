class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size(), n=needle.size();
        for(int i=0;i<h;i++)
        {
            if(haystack[i]==needle[0])
            {
                bool found=true;
                for(int j=0;j<n;j++)
                {
                    if(haystack[i+j]!=needle[j])
                    {
                        found=false;
                        break;
                    }
                }
                if(found) return i;
            }
        }
        return -1;
        
    }
};