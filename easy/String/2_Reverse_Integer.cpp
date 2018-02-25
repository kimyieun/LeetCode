class Solution {
public:
    int reverse(int x) {
        int copy_x = x;
        long result = 0;
        while(copy_x != 0){
            result = result * 10 + copy_x % 10;
            copy_x = copy_x / 10;
        }
        if(result > INT_MAX || result < INT_MIN) return 0;
        return result;
    }
};
