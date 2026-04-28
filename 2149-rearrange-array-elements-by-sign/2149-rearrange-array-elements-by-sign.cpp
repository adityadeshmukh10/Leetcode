class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int h = nums.size();
        

        for(int i=0;i<h;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        int m=0;
        int n=0;
        while(m<h && n<pos.size()){
            nums[m] = pos[n];
            m=m+2;
            n++;
        }

        int a=1;
        int b=0;
        while(a<h && b<neg.size()){
            nums[a] = neg[b];
            a=a+2;
            b++;
        }
        return nums;
    }
};