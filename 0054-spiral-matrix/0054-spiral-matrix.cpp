class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row= matrix.size();
        int col= matrix[0].size();

        int count =0;
        int total =row*col;

        //index initilization
        int startingRow = 0;
        int endRow = row-1;
        int startingCol =0;
        int endCol = col-1;

        while(count<total){
            //starting row
            for(int index= startingCol ; count<total && index<=endCol; index++ ){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //for printing ending column
            for(int index= startingRow; count<total && index<=endRow; index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            //print ending row
            for(int index= endCol; count<total && index>= startingCol; index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            //print starting col
            for(int index = endRow; count<total && index>= startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};