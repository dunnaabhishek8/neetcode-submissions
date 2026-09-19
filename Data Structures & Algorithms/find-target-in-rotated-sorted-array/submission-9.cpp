class Solution {
public:
   
    bool find(vector<int>& nums,int s,int e,int t){
        while(s<=e){
            int m=s+(e-s)/2;

            if(nums[m]==t){
                return true;
            }
            else if(nums[m]<t){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return false;
    }
   

    int ans(vector<int>& nums,int s,int e,int t){
        while(s<=e){
            int m=s+(e-s)/2;

            if(nums[m]==t){
                return m;
            }
            else if(nums[m]<t){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return -1;
    }


    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;

        while(s<e){
            int m=s+(e-s)/2;
            if(nums[m]>nums[e]){
                s=m+1;
            }
            else{
                e=m;
            }
        }

        bool a=find(nums,0,s-1,target);
        bool b=find(nums,s,nums.size()-1,target);

        if(a==1 || b==1){
           if(a==1){
            return ans(nums,0,s-1,target);
           }
           else{
            return ans(nums,s,nums.size()-1,target);
           }
        }
        else{
            return -1;
        }
         
    }
};
