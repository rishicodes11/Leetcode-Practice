class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target<matrix[0][0]) return false;
       int rows=matrix.size();
       int start=0;
       int index=0;
       int end=rows-1;
       while(start<=end){
        int mid=start+(end-start)/2;
        if(matrix[mid][0]==target) return true;
        else if(matrix[mid][0]<target){
            index=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       } 
    int row_index=index;
    cout<<row_index;
    start=0;
    int row_size=matrix[row_index].size();
    end=start+row_size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(matrix[row_index][mid]==target) return true;
        else if(matrix[row_index][mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
    }
};