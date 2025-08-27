class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double diag_length=-1;
        int area;
        for(int i=0;i<dimensions.size();i++){
                double diag=sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
                if(diag>diag_length){
                    area=dimensions[i][0]*dimensions[i][1];
                    diag_length=diag;
                }
                else if(diag==diag_length){
                    area=max(area,dimensions[i][0]*dimensions[i][1]);
                }      
        }
        return area;
    }
};