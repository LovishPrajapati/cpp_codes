#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int winSize = 1;
        int finalSum = 0;
        int start = 0;
        int end = 0;
        while(winSize < arr.size()){
            int currSum = 0;
            for(int i = start; i<= end;i++){
                currSum +=arr[i];
            }
            winSize+=2;
        }
    }
};