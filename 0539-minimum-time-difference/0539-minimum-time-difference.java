class Solution {


    public int findMinDifference(List<String> tp) {
        int minn=Integer.MAX_VALUE;
        int temp[]=new int[tp.size()];
        for(int i=0;i<tp.size();i++){
            String arr[]=tp.get(i).split(":");
            int hour=Integer.parseInt(arr[0]);
            int minute=Integer.parseInt(arr[1]);
            minute+=(hour*60);
            temp[i]=minute;
        }
        int n=tp.size();
        // Arrays.sort(temp);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff=Math.abs(temp[i]-temp[j]);
                if(diff>720)
                    diff=1440-diff;
                minn=Math.min(diff,minn);
            }
        }
        return minn;
    }
}