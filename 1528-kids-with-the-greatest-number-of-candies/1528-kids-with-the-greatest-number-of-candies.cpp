class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = INT_MIN;
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }

        vector<bool> v(candies.size()); // Initialize vector with size of candies
        for(int i = 0; i < candies.size(); i++) {
            v[i] = (candies[i] + extraCandies >= maxCandies);
        }

        return v;
    }
};
