class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> output(n,1);

        int leftproduct = 1;

        for(int i=0;i<n;i++){
            output[i]=leftproduct;
            leftproduct *= nums[i];
        }
        int rightProduct = 1;
        for(int i=n-1;i>=0;i--){
            output[i]= rightProduct*output[i];
            rightProduct*=nums[i];
        }

        return output;
    }
};
