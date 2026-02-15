class Solution {
    public int majorityElement(int[] nums) {
    //     int n= nums.length;
    //     for(int i=0; i<n; i++){
    //         int cnt =0;
    //         for(int j=0; j<n; j++){
    //             if(nums[j]== nums[i])
    //             cnt++;
    //         }
    //          if(cnt>(n/2))
    //     return nums[i];
    //     }
    //    return -1;

    Map<Integer, Integer> mp = new HashMap<>();
    for(int i=0; i<nums.length; i++){
        mp.put(nums[i], mp.getOrDefault(nums[i],0)+1);
    }
    for(Map.Entry<Integer, Integer>it : mp.entrySet()){
        if(it.getValue() >(nums.length/2)){
            return it.getKey();
        }
    }
    return -1;
    }
}