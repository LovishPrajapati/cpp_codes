#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int size = nums.size();
        int count = 0;
            for(int i = 0; i<size-1;i++){
                int curr = nums[i];
                for(int j = i+1; j<size-1;j++){
                    if((nums[j] - curr) == diff){
                        int curr2 = nums[j];
                        for(int k = j+1;k<size;k++){
                            if((nums[k] - curr2) == diff){
                                count++;
                            }
                        }
                    }
                }
            }
        return count;
    }
};

int main(){
    Solution s;
    vector<int> v{0,1,4,6,7,10};
    cout<<s.arithmeticTriplets(v,3);
}