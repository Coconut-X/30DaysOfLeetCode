class Solution {
public:
    int pivotInteger(int n) {
       if(n<1 ||  n>1000) return -1;
       int pre=0,suff=0;
       for(int i=1;i<=n;i++)
       {
            // pre=i*(i+1)/2;
            // suff=n*(n+1)/2 -pre;
            // if(pre==suff) return i;

            // pre=i*(i+1)/2;
            // suff=n*(n+1)/2 -pre;
            if(i*(i+1)/2==n*(n+1)/2 - i*(i-1)/2) return i;
            //we had sum from 1-i and 1-n -(1-i); on other side of equation it will cancel out 2

            pre=0,suff=0;
       }
        
        return -1;
    }
};