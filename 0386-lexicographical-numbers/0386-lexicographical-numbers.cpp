class Solution {
public:
    static bool comp(const string &a, const string &b) {
        // Comparator to compare two strings in lexicographical order
        return a + b < b + a;
    }

    vector<int> lexicalOrder(int n) {
        vector<string> v; // Vector to store numbers as strings
        for (int i = 1; i <= n; i++) {
            v.push_back(to_string(i)); // Convert numbers to strings
        }

        // Sort strings lexicographically using the built-in string comparator
        sort(v.begin(), v.end());

        vector<int> res; // Vector to store the final result
        for (const string &s : v) {
            res.push_back(stoi(s)); // Convert strings back to integers
        }

        return res; // Return the result in lexicographical order
    }
};

// class Solution {
// public:
//     static bool comp(const string &a, const string &b) {
//         // Comparator function to sort based on lexicographical order
//         return a + b < b + a;
//     }

//     vector<int> lexicalOrder(int n) {
//         vector<string> v;  // Changed vector<int> to vector<string> to handle strings for sorting
//         for (int i = 1; i <= n; i++) {
//             v.push_back(to_string(i));  // Convert integers to strings
//         }

//         // Sort the numbers lexicographically using the custom comparator
//         sort(v.begin(), v.end());

//         vector<int> res;
//         for (const string &s : v) {
//             res.push_back(stoi(s));  // Convert sorted strings back to integers
//         }

//         return res;      
//     }
// };







// class Solution {
// public:
//     static bool comp(string a,string b)
//     {
//         return a+b >b+a;
//     }
//     string largestNumber(vector<int>& nums) 
//     {
//         vector<string>v;
//         for(int i=0;i<nums.size();i++)
//         {
//             v.push_back(to_string(nums[i]));
//         }
//         sort(v.begin(),v.end(),comp);
//         if(v[0]=="0")
//         {
//             return "0";
//         }
           
//         string ans="";
//         for(string x: v)
//         {
//             ans+=x;
//         }
//         return ans;
//     }
// };