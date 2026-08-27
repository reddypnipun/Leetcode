// Last updated: 8/27/2026, 7:27:47 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0;
        int sum=0;
        int min_idx=INT_MAX;
        int idx;
        while(r<nums.size()){
            if(sum<target){
                sum+=nums[r];
                r++;
            }
            while(sum>=target){
                idx=r-l;
                min_idx=min(min_idx,idx);
                sum-=nums[l];
                l++;
            }
        }
        if(min_idx==INT_MAX) return 0;
        return min_idx;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void* operator new(size_t size) {
    constexpr std::size_t alignment = alignof(std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;
    char* aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;
    return aligned_ptr;
}
void operator delete(void* ptr, unsigned long) {}
void operator delete(void* ptr) {}
void operator delete[](void* ptr) {}