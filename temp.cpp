#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {0,0,1};
    int count = 0;

    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            count++;
            nums.erase(nums.begin()+i);
            i--;
        }
    }

    for(int i=1;i<=count;i++){
        nums.push_back(0);
    }

    for(int x : nums){
        cout<<x<<" ";
    }
}