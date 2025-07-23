class Solution {
public:
    int reverse(int n) {
        int ans = 0;

        while(n!=0){

            int digit = n % 10; 

            if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
                return 0;
            }
            ans = 10*ans + digit;
            n=n/10;
        }
        return ans ;
        
    }
};