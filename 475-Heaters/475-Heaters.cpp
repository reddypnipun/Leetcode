// Last updated: 9/9/2026, 8:41:56 PM
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int min_radius = 0;
        for (int house : houses) {
            auto next_heater = lower_bound(heaters.begin(), heaters.end(), house);
            int dist1 = INT_MAX;
            int dist2 = INT_MAX;
            if (next_heater != heaters.end()) {
                dist1 = *next_heater - house;
            }
            if (next_heater != heaters.begin()) {
                dist2 = house - *(next_heater - 1);
            }
            int closest_heater_dist = min(dist1, dist2);
            min_radius = max(min_radius, closest_heater_dist);
        }
        return min_radius;
    }
};
