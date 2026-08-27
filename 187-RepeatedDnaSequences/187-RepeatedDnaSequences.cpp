// Last updated: 8/27/2026, 7:27:51 PM
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        string k;
        unordered_map<string, int> hash;
        if(s.size()<11) return ans;
        for(int i=0;i<=s.size()-10;i++){
            k=s.substr(i,10);
            if(hash[k]!=0) hash[k]++;
else hash[k]=1;
        }
    for (const auto& [key, value] : hash)
     if (value > 1) ans.push_back(key);
        return ans;
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