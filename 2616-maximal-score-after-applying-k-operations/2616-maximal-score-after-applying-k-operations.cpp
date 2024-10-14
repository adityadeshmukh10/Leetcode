class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, less<int>> pq(nums.begin(), nums.end());
        long long score = 0;
        for(int i = 0; i < k; i++) {
            int p = pq.top();  // Get the top element (largest)
            pq.pop();  // Remove the top element
            score += p;  // Add the top element to the score
            p = ceil(p / 3.0);  // Update p with ceil(p/3.0)
            pq.push(p);  // Push the updated value back into the priority queue
        }
        return score;
    }
};
