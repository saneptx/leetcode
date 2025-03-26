#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
	void merge(vector<int>& nums1,int m,vector<int>& nums2,int n){
        vector<int> sorted(m+n);
        int p1=0,p2=0;
        int cur = 0;
        while(p1<m || p2<n){
            if(p1==m){
                cur = nums2[p2++];  
            }else if(p2==n){
                cur = nums1[p1++];
            }else if(nums1[p1]<nums2[p2]){
                cur = nums1[p1++];
            }else{
                cur = nums2[p2++];
            }
            sorted[p1+p2-1] = cur;
        }
        for(int i=0;i<m+n;i++){
            nums1[i] = sorted[i];
        }
    }
};
int main(){
	Solution s;
	vector<int> nums1 = {1,2,3,0,0,0};
	vector<int> nums2 = {2,5,6};
	s.merge(nums1,3,nums2,3);
	for(int i=0;i<nums1.size();i++){
		cout<<nums1[i]<<" ";
	}
    cout<<endl;
	return 0;
}
