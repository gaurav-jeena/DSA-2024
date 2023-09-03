#include <bits/stdc++.h> 

vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {

    

     vector<vector<int>> ans;

        set<vector<int>>s;

        int target=K;

        // int n = nums.size();

        sort(nums.begin(),nums.end());

        

        for(int i=0;i<nums.size();i++){

            int j=i+1,k=nums.size()-1;

            while(j<k){

                int sum=nums[i]+nums[j]+nums[k];

                if(sum==target){

                    s.insert({nums[i],nums[j],nums[k]});

                    j++,k--;

                }

                else if(sum<target){

                    j++;

                }

                else{

                    k--;

                }

            }

        }

 

        for(const auto& triplets : s){

            ans.push_back(triplets);

        }

        return ans;

 

}