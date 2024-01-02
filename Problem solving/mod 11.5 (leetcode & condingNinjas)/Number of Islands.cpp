// class Solution {

//     constexpr static int N = 1e3 + 10;
//     int visited[N][N];
//     int n, m;
//     vector<vector<char>>g;

//     public:
//     bool isValid(int i, int j)
//     {
//         return (i >= 0 && i < n && j >= 0 && j < m);
//     }
//     void dfs(int i, int j)
//     {
//         if (!isValid(i, j))
//         {
//             return;
//         }
//         if (visited[i][j])
//         {
//             return;
//         }
//         if (g[i][j] == '0')
//         {
//             return;
//         }
//         visited[i][j] = true;
//         dfs(i, j - 1);
//         dfs(i, j + 1);
//         dfs(i - 1, j);
//         dfs(i + 1, j);
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         g = grid;
//         n = grid.size();
//         m = grid[0].size();
//         int count = 0;
//         for (int i = 1;i<=grid.size();i++){
//             for(int j = 1;j<=grid[i].size();j++){
//             if (visited[i][j])
//             {
//                 continue;
//             }
//             if (grid[i][j] == '0')
//             {
//                 continue;
//             }
//             dfs(i, j);
//             count++;
//         }
//         // cout<<grid.size()<<endl;
//         }
//         return count;
//     };
// };