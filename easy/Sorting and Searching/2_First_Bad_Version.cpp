// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        return find(1, n);
    }
    
    int find(long start, long end){
        if(start == end) return start;
        if(start + 1 == end && isBadVersion(start) == 0) return end;
        else if(start + 1 == end && isBadVersion(start) == 1) return start;
        
        long tmp = (start + end)/2;
        if(isBadVersion(tmp) == 0){
            return find(tmp+1, end);
        }
        else return find(start, tmp);
    }
};
