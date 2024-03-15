class Solution {
public:
    bool isPerfectSquare(int num) {
        //int half=num/2;
        for(long int i=1;i<=num;i++)
            if(i*i==num) return true;
        return false;    
    }
};