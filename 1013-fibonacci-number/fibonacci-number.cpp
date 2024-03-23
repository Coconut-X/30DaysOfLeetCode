class Solution {
public:
    int fib(int n) {

    if(n==1 || n==2) return 1; 

    int first=0, second=1, next=0;
    
        for(int i=2; i<=n; i++)
        {
            next=first+second;
            first=second;
            second=next;
        }
        return next;

    }
};