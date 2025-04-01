#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
	int removeElement(vector<int>& nums,int val){
		int left = 0;
		int right = nums.size()-1;
		while(left <= right){
			while(left < right && nums[right]==val){
				right--;
			}
			while(left < right && nums[left]!=val){
				left++;
			}
			if(left == right){
				if(nums[left]!=val)
					left++;
				break;
			}
			swap(nums[left],nums[right]);
		}
		return left;
	}
};
int main(){
	//vector<int> nums = {1};//1
	vector<int> nums = {2};//1
	//vector<int> nums = {3,2,2,3};//3
	//vector<int> nums = {0,1,2,2,3,0,4,2};//2
	int val = 1;
	Solution solution;
	int count = solution.removeElement(nums,val);
	cout<<count<<endl;
	for(int i = 0;i<count;i++){
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	return 0;
}
