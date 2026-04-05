class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int n = nums.size();
        int l = 0, r=n-1; int ans = -1;
        while(l<r)
        {
            int mid = l+(r-l)/2;

            if(nums[mid]==target)
            {
                ans = mid;
                break;
            }
            if(nums[mid]>=nums[l])
            {
                if(nums[l]<=target and nums[mid]>target)
                {
                  r = mid-1;
                }
                else
                {
                    l = mid+1;
                }
            }
            else
            {
                if(target>=nums[l])
                {
                    r = mid-1;
                }
                else
                {
                    if(target>nums[mid])
                    {
                        l = mid+1;
                    }
                    else
                    {
                        r=mid-1;
                    }
                }
            }
        }
        if(l==r and ans ==-1 and nums[l]==target)  ans = l;
        return ans;
    }



};
