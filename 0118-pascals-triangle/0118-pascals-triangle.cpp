class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle; //list of integers

        
        for(int i=0; i<numRows; i++){
            vector<int> row(i + 1, 1); //1 se shuru karo
            for(int j=1; j<i; j++){
            int upperLeft = triangle[i-1][j-1]; //Element diagonally left in upar walli row
            int upper = triangle[i-1][j]; // Element directly above 
            row[j] = upperLeft + upper; //sum kar do guys

        }
        triangle.push_back(row);
    }
    return triangle;
    }
};