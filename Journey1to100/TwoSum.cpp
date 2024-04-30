// so here i have solved this problem on leetcode but but i use TC:O(N^2) And SC:0(N) this isnt an optimal approach so i would 
// suggest we should try something else 
// my code 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       vector<int> ans;
       for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum = nums[i] + nums[j];
                if(sum == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
            return ans;
    }
};

// but optimal solution would be 
// in TC:O(N) AND SC:O(N)....
// using map 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int > mt ;
        vector<int> ans;
         int n  = nums.size();
        for(int i=0;i<n;i++)
        {
            if(mt.find(target-nums[i]) !=mt.end() )
            {
                 ans.push_back(mt[target-nums[i]]);
                 ans.push_back(i);
                break;
            }
            else 
            {
                mt[nums[i]] = i;
            }
        }
        return ans;
    }
};


// TC:O(N^2) but SC:O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};