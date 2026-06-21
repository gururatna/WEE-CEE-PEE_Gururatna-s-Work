class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n=nums.size();
      int temp;
      for(int i =0;i<n;i++)  
      {
        for(int j=0;j<n-i-1;j++)
        {
            int a=nums[j];int b=nums[j+1];
            if(a>b)
            {temp=b;
            nums[j+1]=a;
            nums[j]=temp;
            }
        }
      }
     // return nums;
    }
};