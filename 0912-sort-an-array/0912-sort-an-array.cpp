class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        q(nums,0,nums.size()-1);
        return nums;
    }
private:
    void q(vector<int> &nums,int first, int last){
        if(first>=last) return;
        int pivot=first+rand()%(last-first+1);
        swap(nums[first],nums[pivot]);
        int fin=nums[first];
        int i=first-1;
        int j=last+1;
        while(true){
            do{i++;}
            while(nums[i]<fin);
            do{j--;}
            while(nums[j]>fin);
            if(i>=j) break;
            swap(nums[i],nums[j]);
        }
        q(nums,first,j);
        q(nums,j+1,last);
    }
};