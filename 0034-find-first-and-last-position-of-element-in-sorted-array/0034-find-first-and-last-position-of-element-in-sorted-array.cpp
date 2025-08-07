class Solution {
public:
int firstOccurrence(vector<int>& arr, int key){
    int s=0, e=arr.size()-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
int lastOccurrence(vector<int>& arr, int key){
    int s=0, e=arr.size()-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        pair <int,int>p;
        p.first = firstOccurrence(nums, target);
        p.second = lastOccurrence(nums, target);
        return {p.first, p.second };
    }
};