class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowFlag = 1;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    if(i == 0) rowFlag = 0;
                    else matrix[i][0] = 0;
                }
            }
        }

        for(int i = row-1; i>=0; i--){
            for(int j = col-1; j>=0; j--){
                if(i==0){
                    if(matrix[0][j] == 0 || rowFlag == 0)matrix[i][j]=0;
                }
                else{
                    if(matrix[i][0] == 0 || matrix [0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    }
};