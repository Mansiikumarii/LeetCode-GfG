// User function Template for Java

class Solution {
    boolean check_elements(int arr[], int n, int A, int B) {
        HashSet<Integer> set = new HashSet<>();
        for(int i=0; i<n;i++){
            set.add(arr[i]);
        }
        for(int num=A; num<=B;num++){
            if(!set.contains(num))
            return false;
        }
        return true;
    }
}
