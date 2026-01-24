class Solution {
    public ArrayList<Integer> getAlternates(int arr[]) {
        // Code Here
        ArrayList<Integer>result= new ArrayList<>();
        int n= arr.length;
        for(int i=0; i<n; i+=2){
            result.add(arr[i]); 
        }
           
       return result;
    }
}