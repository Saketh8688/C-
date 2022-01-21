/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:
Input: nums = [0]
Output: [0]
*/
#include <iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[count]);
                count++;
            }
    }
        
}
void printArray(vector<int>& nums)
{
    for (int i = 0; i <nums.size(); i++)
        cout << nums[i] << " ";
}
int main()
{
    vector<int> nums{0,1,9 ,8, 4, 0, 0, 2, 7, 0, 6, 0, 9 };
    moveZeroes(nums);
    printArray(nums);
    return 0;
}
