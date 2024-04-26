class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0,k=0,c=1;

        int s=chars.size();
        while (i <s) 
        {
            int j = i + 1;

            while (j < s && chars[i] == chars[j]) 
                    c++,j++;

            chars[k++] = chars[i];

            if (c > 1) 
            {
                string s = to_string(c);
                for (char ch : s)
                    chars[k++] = ch;
            }
            i = j,c=1;
        }

        return k;
    }
};
