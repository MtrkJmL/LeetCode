class Solution {
private:
    vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
public:
    int numIslands(vector<vector<char>>& grid) {
        int numIsland=0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int row =0; row<rows;row++){
            for(int col =0;col<cols;col++){
                if(grid[row][col]=='1'){
                    bfs(grid,row,col);
                    numIsland++;
                }
            }
        }
        return numIsland;
    }
    void bfs(vector<vector<char>>&grid, int row, int col){
        queue<pair<int, int>> q;
        grid[row][col]='0';
        q.push({row,col});
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nr = curr.first+directions[i][0];
                int nc = curr.second+directions[i][1];
                if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]=='1'){
                    q.push({nr,nc});
                    grid[nr][nc] = '0';
                }
            }
        }
    }


};