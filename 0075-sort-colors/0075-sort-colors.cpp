class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m=0,n=0,p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                m++;
            }
            else if(nums[i]==1){
                n++;
            }
            else{
                p++;
            }
        }

        for(int j=0;j<m;j++){
            nums[j]=0;
        }
        for(int k=m;k<m+n;k++){      // Changed: p → m+n
            nums[k]=1;
        }
        for(int l=m+n;l<nums.size();l++){  // Changed: n → m+n
            nums[l]=2;
        }
    }
};