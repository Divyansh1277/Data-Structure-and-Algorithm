class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        int i = 0,j = arr.size()-1;
        int count = 0;
        int occ = 0;
        for(int i=0,i<arr.size();i++){
            if(arr[i]==target) occ+;
            if(arr[i]<target) count++;
        }
        vector<int>v;
        for(int i=0;i<occ;i++){
            v.push_back(count++);
            
        }
        return v;
    }
};