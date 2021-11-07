// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        int n = a.size();
        vector<vector<int>>res;
        for(int i = 0;i<n-2;i++)
        {
            if(i==0 || i>0 && a[i]!=a[i-1])
            {
                int sm = 0-a[i];
                int low = i+1;
                int high = n-1;
                while(low<high)
                {
                    if(a[low]+a[high] == sm)
                    {
                        vector<int>t;
                        t.push_back(a[i]);
                        t.push_back(a[low]);
                        t.push_back(a[high]);
                        res.push_back(t);
                        while(low<high && a[low]==a[low+1]) low++;
                        while(low<high && a[high]==a[high-1]) high--;
                        low ++;
                        high --;
                    }
                    else if(a[low]+a[high]<sm)
                        low++;
                    else{
                        high --;
                    }
                    
                }
            }
        }
        return res;
    }
};
