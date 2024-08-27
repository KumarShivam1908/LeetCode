// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        
        while (start < end) {
            int mid = start + (end - start) / 2;  // Avoid potential overflow
            if (isBadVersion(mid)) {
                end = mid;  // Move end to mid to check earlier versions
            } else {
                start = mid + 1;  // Move start to mid + 1 to check later versions
            }
        }
        return start;  
    }
};
