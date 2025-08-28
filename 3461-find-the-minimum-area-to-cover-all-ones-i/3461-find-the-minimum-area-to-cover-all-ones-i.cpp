class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
         // go rowwise and ge the top and lower row for length
      // go col wise to get left and right col for breadth
      int row=grid.size(); 
      int col=grid[0].size();
        int row_upper=row,row_lower=-1,col_left=col,col_right=-1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    row_upper=min(row_upper,i);
                    row_lower=max(row_lower,i);
                    col_left=min(col_left,j);
                    col_right=max(col_right,j);
                }
            }
        }
           
        cout<<"row_lower:"<<row_lower<<endl;
        cout<<"row_upper:"<<row_upper<<endl;
        cout<<"col_left:"<<col_left<<endl;
        cout<<"col_right:"<<col_right<<endl;
        int length=row_lower-row_upper+1;
        int breadth=col_right-col_left+1;

        cout<<"length"<<length<<endl;
        cout<<"breadth"<<breadth<<endl;

        return length*breadth;


    }
};