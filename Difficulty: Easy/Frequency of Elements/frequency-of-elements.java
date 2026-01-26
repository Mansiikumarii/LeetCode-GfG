class Solution {
    public ArrayList<ArrayList<Integer>> countFreq(int[] arr) {
        // code here
        HashMap <Integer,Integer> mp = new HashMap<>();
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        
        for(int num : arr){
            mp.put(num,mp.getOrDefault(num,0)+1);
        }
        for(Map.Entry<Integer,Integer>entry : mp.entrySet()){
            ArrayList<Integer> temp = new ArrayList<>();
            temp.add(entry.getKey());
            temp.add(entry.getValue());
            ans.add(temp);
        }
        return ans;
    }
}