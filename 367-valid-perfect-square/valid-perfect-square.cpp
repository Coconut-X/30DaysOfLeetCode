class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int half=num/2;
        for(long int i=1;i<=half;i++)
            if(i*i==num) return true;
        return false;    
    }
};