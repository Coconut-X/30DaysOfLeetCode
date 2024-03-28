class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        int f=0,s=1,next;
        for(int i=1;i<=n;i++)
        {
            next=f+s;
            f=s;
            s=next;
        }
        return next;
    }
};