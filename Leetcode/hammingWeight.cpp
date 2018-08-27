class Solution {
public:
     int hammingWeight(uint32_t n) {
            int num = 0;
            for (;n != 0; n >>= 1) num += n & 1;
            return num;
        }
};
