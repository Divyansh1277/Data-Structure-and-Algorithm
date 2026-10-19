class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        int i = 0,j = arr.size()-1;
        int count = 0;
        int occ = 0;
        while(i<=j){
            if(arr[i]<target){
                count++;
            }
            if(arr[j]<target){
                count++;
            }
            if(arr[i]==target) occ++;
            if(arr[j]==target) occ++;
            i++;j--;
        }
        vector<int>v;
        for(int i=0;i<occ;i++){
            v.push_back(count++);
            
        }
        return v;
    }
};