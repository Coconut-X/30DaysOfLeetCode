class Solution {
public:
    int pivotInteger(int n) {
     
       for(int i=1;i<=n;i++)
           // if(i*(i+1)==n*(n+1) - i*(i-1)) return i;
            if(2*i*i==n*(n+1)) return i;

        return -1;
    }
};