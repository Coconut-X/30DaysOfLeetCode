class Solution {
public:
    int pivotInteger(int n) {
       if(n<1 ||  n>1000) return -1;
       int pre=0,suff=0;
       for(int i=1;i<=n;i++)
       {
            for(int j=1;j<=i;j++) pre+=j;

            for(int k=i;k<=n;k++)suff+=k;

            if(pre==suff) return i;

            pre=0,suff=0;
       }
        
        return -1;
    }
};