class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0, nd = numbers.size()-1;
        while(nd > st){
            while(numbers[st] + numbers[nd] > target){
                nd--;
            }
            while(numbers[st] + numbers[nd] < target){
                st++;
            }
            if(numbers[st]+numbers[nd] == target){
                return {st+1,nd+1};
            }
        }
    }
};
