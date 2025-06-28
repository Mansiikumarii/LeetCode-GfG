class Solution {
public:

vector<vector<int>>directions = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,-1},{-1,1}};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n= grid.size();
        int m= grid[0].size();

        if(grid[0][0] ==1 || grid[n-1][n-1] ==1) return -1;

        queue<pair<pair<int,int>,int>>q;// andar x,y bahar walle main weight store karenge
        q.push({{0,0},1});

        //lambda function
        auto isSafe =[&] (int x, int y){
            return x>=0 && x<n && y>=0 && y<m;
        };

        while(!q.empty()){
            int x=q.front().first.first; // x axis ki value
            int y = q.front().first.second;
            int first_dist = q.front().second;
            q.pop();

            if(x == n-1 && y == m-1) return first_dist;

            for(auto dir: directions){
                int x_ = x+dir[0];
                int y_ = y+dir[1];

                //ham kahin boundary ke bahar toh nahi chale gaye
                if(isSafe(x_, y_) && grid[x_][y_] ==0){
                    //agar 0 hai aur safe hai tabhi travel karo
                    grid[x_][y_] =1;
                    q.push({{x_,y_},first_dist+1});
                }
            }
        }
        return -1;
    }
};