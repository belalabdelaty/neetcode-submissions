class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int x = 0;
        int cnt = 1;
        while(cnt <= matrix.size()){
            int a = matrix[x][0], b = matrix[x][matrix[0].size()-1];
            if(target >= a and target <= b){
                //do binary search again
                int col1 = 0, col2 = matrix[0].size()-1;
                while(col1<=col2){
                    int mid = (col1+col2)/2;
                    if(matrix[x][mid]>target){col2=mid-1;}
                    else if(matrix[x][mid]<target){col1=mid+1;}
                    else if(matrix[x][mid] == target){
                        return true;
                    }
                }
            }
            x++;
            cnt++;
        }
        return false;
    }
};
