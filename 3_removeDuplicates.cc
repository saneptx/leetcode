#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int removeDuplicates(vector<int>& nums){
        int n = nums.size();
        if(n==0)
            return n;
        int slow = 1;
        int fast = 1;
        while(fast<n){
            /*if(nums[fast] == nums[slow-1])
                fast++;
            else{
                nums[slow] = nums[fast];
                slow++;
                fast++;
            }*/
            if(nums[fast] != nums[slow-1]){
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};

int main(){
    //vector<int> nums = {0,0,1,1,1,2,2,2,3,3,4};
    vector<int> nums = {1,1,2};
    Solution solution;
    int count = solution.removeDuplicates(nums);
    for(int i=0;i<count;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
