// Last updated: 8/20/2026, 8:09:31 PM
class Solution {
public:
    int numberOfBoomerangs(std::vector<std::vector<int>>& points) {
    int total_boomerangs = 0;
    for (int i = 0; i < points.size(); ++i) {
        std::unordered_map<int, int> distance_counts;
        for (int j = 0; j < points.size(); ++j) {
            if (i == j) continue;
            int dx = points[i][0] - points[j][0];
            int dy = points[i][1] - points[j][1];
            int sq_dist = dx * dx + dy * dy;
            distance_counts[sq_dist]++;
        }
        for (auto& pair : distance_counts) {
            int val = pair.second;
            total_boomerangs += val * (val - 1);
        }
    }
    return total_boomerangs;
}
};