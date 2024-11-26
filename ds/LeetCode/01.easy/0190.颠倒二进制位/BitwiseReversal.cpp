class Solution{
public:
    unit32_t reserveBits(unit_t n){
        unit32_t rev = 0;
        for(int i = 0; i < 32 && n > 0; ++i){
            rev |= ( n & 1 ) << (31 - i);
            n >> 1;
        }
        return rev;
    }
}
