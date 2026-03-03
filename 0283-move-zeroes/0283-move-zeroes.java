class Solution {
    public void moveZeroes(int[] nums) {
        // int i = 0;
        // int j = 1;

        // while(j<nums.length){
        //     if(nums[i] == 0 && nums[j]!=0){
        //         nums[i]=nums[j];
        //         nums[j] = 0;
        //         i++;
        //         j++;
        //     } 
        //     else if(nums[i] == 0 && nums[j] == 0){
        //         j++;
        //     }
        //     else{
        //         i++;
        //         j++;
        //     }
        // }

        int n = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                int temp = nums[i];
                nums[i] = nums[n];
                nums[n] = temp;
                n++; 
            }
        }
    }
}