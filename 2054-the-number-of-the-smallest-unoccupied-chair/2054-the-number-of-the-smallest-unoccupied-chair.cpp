class Solution {
public:
    typedef pair<int, int> P;
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();

        priority_queue<P, vector<P>, greater<P>> occupied;  // To track occupied chairs (departure time, chair number)
        priority_queue<int, vector<int>, greater<int>> free;  // To track available free chairs

        int targetFriendArrivalTime = times[targetFriend][0];

        int chairno = 0;  // Keeps track of chair assignment
        sort(begin(times), end(times));  // Sort times based on arrival time

        for (int i = 0; i < n; i++) {
            int arrival = times[i][0];
            int depart = times[i][1];

            // Release all chairs that are free before current friend's arrival time
            while (!occupied.empty() && occupied.top().first <= arrival) {
                free.push(occupied.top().second);
                occupied.pop();
            }

            // If no free chairs, assign a new chair
            if (free.empty()) {
                occupied.push({depart, chairno});
                if (arrival == targetFriendArrivalTime) {
                    return chairno;  // Return if it's the target friend's arrival
                }
                chairno++;  // Increment chair number for the next friend
            }
            // Assign the least available chair
            else {
                int leastChairAvailable = free.top();
                free.pop();
                if (arrival == targetFriendArrivalTime) {
                    return leastChairAvailable;  // Return if it's the target friend's arrival
                }
                occupied.push({depart, leastChairAvailable});
            }
        }
        return -1;
    }
};
